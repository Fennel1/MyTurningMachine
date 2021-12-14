/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *PB_InputRule;
    QListWidget *List_InputRules;
    QTextEdit *textEdit;
    QTextEdit *Text_StatusSet;
    QTextEdit *textEdit_3;
    QTextEdit *Text_InputChars;
    QTextEdit *textEdit_5;
    QTextEdit *Text_StartStatus;
    QTextEdit *textEdit_7;
    QTextEdit *Text_EndStatus;
    QListWidget *List_NowRules;
    QTextEdit *textEdit_9;
    QLineEdit *Input_Chars;
    QTextEdit *textEdit_10;
    QPushButton *PB_Start;
    QPushButton *PB_OneStep;
    QPushButton *PB_AllStep;
    QTableWidget *Table;
    QTextEdit *textEdit_11;
    QTextEdit *Text_thisRule;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1440, 900);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        PB_InputRule = new QPushButton(centralWidget);
        PB_InputRule->setObjectName(QString::fromUtf8("PB_InputRule"));
        PB_InputRule->setGeometry(QRect(50, 40, 200, 80));
        List_InputRules = new QListWidget(centralWidget);
        List_InputRules->setObjectName(QString::fromUtf8("List_InputRules"));
        List_InputRules->setGeometry(QRect(50, 150, 201, 511));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(300, 150, 241, 51));
        Text_StatusSet = new QTextEdit(centralWidget);
        Text_StatusSet->setObjectName(QString::fromUtf8("Text_StatusSet"));
        Text_StatusSet->setGeometry(QRect(570, 150, 571, 51));
        textEdit_3 = new QTextEdit(centralWidget);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(300, 230, 241, 51));
        Text_InputChars = new QTextEdit(centralWidget);
        Text_InputChars->setObjectName(QString::fromUtf8("Text_InputChars"));
        Text_InputChars->setGeometry(QRect(570, 230, 571, 51));
        textEdit_5 = new QTextEdit(centralWidget);
        textEdit_5->setObjectName(QString::fromUtf8("textEdit_5"));
        textEdit_5->setGeometry(QRect(300, 310, 241, 51));
        Text_StartStatus = new QTextEdit(centralWidget);
        Text_StartStatus->setObjectName(QString::fromUtf8("Text_StartStatus"));
        Text_StartStatus->setGeometry(QRect(570, 310, 571, 51));
        textEdit_7 = new QTextEdit(centralWidget);
        textEdit_7->setObjectName(QString::fromUtf8("textEdit_7"));
        textEdit_7->setGeometry(QRect(300, 390, 241, 51));
        Text_EndStatus = new QTextEdit(centralWidget);
        Text_EndStatus->setObjectName(QString::fromUtf8("Text_EndStatus"));
        Text_EndStatus->setGeometry(QRect(570, 390, 571, 51));
        List_NowRules = new QListWidget(centralWidget);
        List_NowRules->setObjectName(QString::fromUtf8("List_NowRules"));
        List_NowRules->setGeometry(QRect(1190, 190, 201, 331));
        textEdit_9 = new QTextEdit(centralWidget);
        textEdit_9->setObjectName(QString::fromUtf8("textEdit_9"));
        textEdit_9->setGeometry(QRect(1190, 140, 201, 51));
        Input_Chars = new QLineEdit(centralWidget);
        Input_Chars->setObjectName(QString::fromUtf8("Input_Chars"));
        Input_Chars->setGeometry(QRect(570, 470, 571, 51));
        textEdit_10 = new QTextEdit(centralWidget);
        textEdit_10->setObjectName(QString::fromUtf8("textEdit_10"));
        textEdit_10->setGeometry(QRect(300, 470, 241, 51));
        PB_Start = new QPushButton(centralWidget);
        PB_Start->setObjectName(QString::fromUtf8("PB_Start"));
        PB_Start->setGeometry(QRect(300, 540, 200, 80));
        PB_OneStep = new QPushButton(centralWidget);
        PB_OneStep->setObjectName(QString::fromUtf8("PB_OneStep"));
        PB_OneStep->setGeometry(QRect(530, 540, 200, 80));
        PB_AllStep = new QPushButton(centralWidget);
        PB_AllStep->setObjectName(QString::fromUtf8("PB_AllStep"));
        PB_AllStep->setGeometry(QRect(760, 540, 200, 80));
        Table = new QTableWidget(centralWidget);
        Table->setObjectName(QString::fromUtf8("Table"));
        Table->setGeometry(QRect(50, 700, 1341, 150));
        textEdit_11 = new QTextEdit(centralWidget);
        textEdit_11->setObjectName(QString::fromUtf8("textEdit_11"));
        textEdit_11->setGeometry(QRect(970, 560, 191, 51));
        Text_thisRule = new QTextEdit(centralWidget);
        Text_thisRule->setObjectName(QString::fromUtf8("Text_thisRule"));
        Text_thisRule->setGeometry(QRect(1180, 560, 241, 51));
        MainWindow->setCentralWidget(centralWidget);
        PB_InputRule->raise();
        List_InputRules->raise();
        textEdit->raise();
        Text_StatusSet->raise();
        textEdit_3->raise();
        Text_InputChars->raise();
        textEdit_5->raise();
        Text_StartStatus->raise();
        textEdit_7->raise();
        Text_EndStatus->raise();
        List_NowRules->raise();
        textEdit_9->raise();
        Input_Chars->raise();
        textEdit_10->raise();
        PB_Start->raise();
        PB_OneStep->raise();
        Table->raise();
        textEdit_11->raise();
        PB_AllStep->raise();
        Text_thisRule->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        PB_InputRule->setText(QCoreApplication::translate("MainWindow", "\345\275\225\345\205\245\350\247\204\345\210\231", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\212\266\346\200\201\351\233\206\345\220\210\357\274\232</p></body></html>", nullptr));
        Text_StatusSet->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEdit_3->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\276\223\345\205\245\345\255\227\347\254\246\351\233\206\345\220\210\357\274\232</p></body></html>", nullptr));
        Text_InputChars->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEdit_5->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\210\235\345\247\213\347\212\266\346\200\201\357\274\232</p></body></html>", nullptr));
        Text_StartStatus->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEdit_7->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\273\210\346\255\242\347\212\266\346\200\201\357\274\232</p></body></html>", nullptr));
        Text_EndStatus->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        textEdit_9->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\247\204\345\210\231\345\210\227\350\241\250</p></body></html>", nullptr));
        textEdit_10->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\276\223\345\205\245\347\272\270\345\270\246\357\274\232</p></body></html>", nullptr));
        PB_Start->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\350\277\220\350\241\214", nullptr));
        PB_OneStep->setText(QCoreApplication::translate("MainWindow", "\345\215\225\346\255\245\350\277\220\350\241\214", nullptr));
        PB_AllStep->setText(QCoreApplication::translate("MainWindow", "\344\270\200\351\224\256\350\277\220\350\241\214", nullptr));
        textEdit_11->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\275\223\345\211\215\350\247\204\345\210\231\357\274\232</p></body></html>", nullptr));
        Text_thisRule->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
