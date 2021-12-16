#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_pending.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), pending(new Pending),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    nowPoint = 1;

    ui->Table->horizontalHeader()->hide();
    ui->Table->verticalHeader()->hide();
    ui->Table->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    ui->Text_StartStatus->setReadOnly(true);
    ui->Text_EndStatus->setReadOnly(true);
    ui->Text_InputChars->setReadOnly(true);
    ui->Text_StatusSet->setReadOnly(true);
    ui->textEdit_3->setReadOnly(true);
    ui->textEdit_5->setReadOnly(true);
    ui->textEdit_7->setReadOnly(true);
    ui->textEdit_9->setReadOnly(true);
    ui->textEdit_10->setReadOnly(true);

    connect(ui->PB_InputRule, SIGNAL(clicked()), this, SLOT(Press_InputRules()));
    connect(ui->PB_Start, SIGNAL(clicked()), this, SLOT(Press_Start()));
    connect(ui->PB_OneStep, SIGNAL(clicked()), this, SLOT(Press_OneStep()));
    connect(ui->PB_AllStep, SIGNAL(clicked()), this, SLOT(Press_AllStep()));

    connect(ui->List_InputRules, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(Press_RulesList(QListWidgetItem*)));
}

void MainWindow::Press_InputRules()
{
    QDir dir("../rules");
    dir.setFilter(QDir::Dirs | QDir::Files | QDir::NoDotAndDotDot);
    QFileInfoList list = dir.entryInfoList();

    qDebug() << list << endl;

    for (int i=0; i<list.size(); i++){
        QString filename = list.at(i).fileName();
        filename = filename.left(filename.size()-4);
        ui->List_InputRules->addItem(filename);
    }
}

void MainWindow::Press_Start()
{
    ui->Table->clear();
    nowPoint = 1;
    nowStatus = startS;

    if (ui->Input_Chars->text().isEmpty())  return;
    qDebug() << ui->Input_Chars->text() << endl;

    ui->Table->setRowCount(2);
    ui->Table->setColumnCount(300);
    order = "B" + ui->Input_Chars->text() + "B";
    for (int i=0; i<order.size(); i++){
        if (order[i] == 'B')    continue;
        bool flag = false;
        for (int j=0; j<readlist.size(); j++){
            if (order[i] == readlist[j]){
                flag = true;
                break;
            }
        }
        if (!flag){
            QMessageBox::information(nullptr,"ERROR","输入纸带有误",QMessageBox::Ok);
            return;
        }
    }

    setTable();
}

int MainWindow::Press_OneStep()
{
    if (order.size() < 1)   return -1;
//    qDebug() << "now:" << nowStatus << order[nowPoint] << endl;
    bool flag=false;
    if (nowStatus != endS){
        for (int i=0; i<rulesNum; i++){
//            qDebug() << i << thisrules[i].SS << thisrules[i].read << endl;
            if (nowStatus == thisrules[i].SS && order[nowPoint] == thisrules[i].read){
                nowStatus = thisrules[i].ES;
                order[nowPoint] = thisrules[i].Tread.data()[0];
//                qDebug() << order << endl;
                ui->Text_thisRule->clear();
                QString str='q'+QString::number(thisrules[i].SS)+','+thisrules[i].read+','+'q'+QString::number(thisrules[i].ES)+','+thisrules[i].Tread+','+thisrules[i].Go;
                ui->Text_thisRule->append(str);
                if (thisrules[i].Go == "R"){
                    if (nowPoint+1 == order.size()) order.append('B');
                    nowPoint++;
                }
                else if (thisrules[i].Go == "L"){
                    if (nowPoint+1 == order.size()) order.append('B');
                    nowPoint--;
                }
                if (nowPoint - 12 > 0)  ui->Table->horizontalScrollBar()->setSliderPosition(nowPoint-12);
                flag = true;
                break;
            }
        }
        if (!flag){
            QMessageBox::information(nullptr,"ERROR","输入纸带有误",QMessageBox::Ok);
            return -1;
        }
    }
    else{
        QMessageBox::information(nullptr,"YES!!!!","成功转换！！！！",QMessageBox::Ok);
        return 1;
    }
    setTable();
    return 0;
}

void MainWindow::Press_AllStep()
{
    if (order.size() < 1)   return;
    int flag;
    pending->show();
    while (1){
        flag = Press_OneStep();
        if (flag == -1 || flag == 1){
            break;
        }
    }
    pending->hide();
}

void MainWindow::Press_RulesList(QListWidgetItem* item)
{
    qDebug() << item->text() << endl;

    readlist.clear();

    QFile file("../rules/" + item->text() + ".txt");
    if (file.exists())  qDebug() << "file exists" << endl;
    else    qDebug() << "file not exists" << endl;

    if (file.open(QIODevice::ReadOnly)) qDebug() << "file open" << endl;
    else{
        qDebug() << "file open fail" << endl;
        return;
    }

    QTextStream txt(&file);
    QString line=txt.readLine();
    QStringList strlist=line.split(",");
    ruleName = strlist[0];
    rulesNum = strlist[1].toInt();
    qDebug() << ruleName << rulesNum << endl;

    ui->Text_EndStatus->clear();
    ui->Text_StatusSet->clear();
    ui->Text_InputChars->clear();
    ui->Text_StartStatus->clear();

    line=txt.readLine();
    ui->Text_StatusSet->append(line);

    line=txt.readLine();
    strlist=line.split(",");
    for (int i=0; i<strlist.size(); i++){
        readlist.append(strlist[i]);
    }
    qDebug() << readlist << endl;
    ui->Text_InputChars->append(line);

    line=txt.readLine();
    ui->Text_StartStatus->append("q" + line);
    startS = line.toInt();
    nowStatus = line.toInt();

    line=txt.readLine();
    ui->Text_EndStatus->append("q" + line);
    endS = line.toInt();

    thisrules = new Node[rulesNum];

    ui->List_NowRules->clear();
    for (int i=0; i<rulesNum; i++){
        line=txt.readLine();
        strlist=line.split(",");
        thisrules[i].SS = strlist[0].toInt();
        thisrules[i].read = strlist[1].trimmed();
        thisrules[i].ES = strlist[2].toInt();
        thisrules[i].Tread = strlist[3].trimmed();
        thisrules[i].Go = strlist[4].trimmed();
        QString str= 'q'+strlist[0]+','+strlist[1]+','+'q'+strlist[2]+','+strlist[3]+','+strlist[4];
        ui->List_NowRules->addItem(str);
    }

    file.close();

    QFile ruleinfo("../rules/rulesInfo.txt");
    if (ruleinfo.exists())  qDebug() << "file exists" << endl;
    else    qDebug() << "file not exists" << endl;

    if (ruleinfo.open(QIODevice::ReadOnly)) qDebug() << "file open" << endl;
    else{
        qDebug() << "file open fail" << endl;
        return;
    }
}

void MainWindow::setTable()
{
    ui->Table->clear();
    for (int i=0; i<order.size(); i++){
        ui->Table->setItem(0, i, new QTableWidgetItem(QString(order[i])));
        ui->Table->setItem(1, i, new QTableWidgetItem(QString(" ")));
        ui->Table->item(0, i)->setBackgroundColor(Qt::green);
    }
    ui->Table->setItem(1, nowPoint, new QTableWidgetItem("q" + QString::number(nowStatus)));
    ui->Table->item(1, nowPoint)->setBackgroundColor(Qt::green);
}

MainWindow::~MainWindow()
{
    delete ui;
}
