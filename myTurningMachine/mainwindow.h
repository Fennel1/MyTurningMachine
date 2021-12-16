#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QTableWidgetItem>
#include <QHeaderView>
#include <QScrollBar>
#include <algorithm>
#include <vector>
#include <QtDebug>
#include <QDir>
#include <QMessageBox>
#include <pending.h>
#include <windows.h>

namespace Ui {
class MainWindow;
}

typedef struct Node{
    int SS;     //开始状态
    QString read;  //读取字符
    int ES;     //状态转移
    QString Tread; //读头符号变化
    QString Go;    //读头变化（方向）
}* Rule, Node;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:
    void Press_InputRules();
    void Press_Start();
    int Press_OneStep();
    void Press_AllStep();

    void Press_RulesList(QListWidgetItem*);

public:
    explicit MainWindow(QWidget *parent = nullptr);

    void setTable();
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    Pending *pending;

    Rule thisrules;
    QString ruleName;
    QStringList readlist;
    QString order;
    int startS;
    int endS;
    int rulesNum;
    int nowPoint;
    int nowStatus;
};

#endif // MAINWINDOW_H
