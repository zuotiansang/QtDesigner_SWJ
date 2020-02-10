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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLCDNumber *Temp;
    QLCDNumber *Humi;
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *Open;
    QComboBox *com;
    QComboBox *shuju;
    QComboBox *tingzhi;
    QComboBox *jiaoyan;
    QComboBox *baud;
    QTextEdit *infor_;
    QGraphicsView *graphics_view;
    QLabel *label_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(915, 489);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Temp = new QLCDNumber(centralWidget);
        Temp->setObjectName(QString::fromUtf8("Temp"));
        Temp->setGeometry(QRect(130, 20, 211, 91));
        Temp->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);\n"
"background-color: rgb(0, 0, 0);"));
        Humi = new QLCDNumber(centralWidget);
        Humi->setObjectName(QString::fromUtf8("Humi"));
        Humi->setGeometry(QRect(130, 140, 211, 91));
        Humi->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 0);\n"
"background-color: rgb(0, 0, 0);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 101, 91));
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 127);\n"
"font: 26pt \"AcadEref\";"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 140, 101, 91));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 85, 127);\n"
"font: 26pt \"AcadEref\";"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 230, 311, 211));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 30, 54, 12));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 60, 54, 12));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 90, 54, 12));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 120, 54, 12));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 150, 54, 12));
        Open = new QPushButton(groupBox);
        Open->setObjectName(QString::fromUtf8("Open"));
        Open->setGeometry(QRect(10, 180, 80, 20));
        com = new QComboBox(groupBox);
        com->addItem(QString());
        com->addItem(QString());
        com->setObjectName(QString::fromUtf8("com"));
        com->setGeometry(QRect(70, 30, 72, 22));
        shuju = new QComboBox(groupBox);
        shuju->addItem(QString());
        shuju->setObjectName(QString::fromUtf8("shuju"));
        shuju->setGeometry(QRect(70, 60, 72, 22));
        tingzhi = new QComboBox(groupBox);
        tingzhi->addItem(QString());
        tingzhi->setObjectName(QString::fromUtf8("tingzhi"));
        tingzhi->setGeometry(QRect(70, 90, 72, 22));
        jiaoyan = new QComboBox(groupBox);
        jiaoyan->addItem(QString());
        jiaoyan->setObjectName(QString::fromUtf8("jiaoyan"));
        jiaoyan->setGeometry(QRect(70, 120, 72, 22));
        baud = new QComboBox(groupBox);
        baud->addItem(QString());
        baud->setObjectName(QString::fromUtf8("baud"));
        baud->setGeometry(QRect(70, 150, 72, 22));
        infor_ = new QTextEdit(centralWidget);
        infor_->setObjectName(QString::fromUtf8("infor_"));
        infor_->setGeometry(QRect(350, 20, 551, 211));
        graphics_view = new QGraphicsView(centralWidget);
        graphics_view->setObjectName(QString::fromUtf8("graphics_view"));
        graphics_view->setGeometry(QRect(350, 250, 551, 191));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(570, 0, 121, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 915, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\270\251\345\272\246", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\344\270\262\345\217\243\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", nullptr));
        Open->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        com->setItemText(0, QCoreApplication::translate("MainWindow", "COM1", nullptr));
        com->setItemText(1, QCoreApplication::translate("MainWindow", "COM2", nullptr));

        shuju->setItemText(0, QCoreApplication::translate("MainWindow", "8", nullptr));

        tingzhi->setItemText(0, QCoreApplication::translate("MainWindow", "1", nullptr));

        jiaoyan->setItemText(0, QCoreApplication::translate("MainWindow", "0", nullptr));

        baud->setItemText(0, QCoreApplication::translate("MainWindow", "115200", nullptr));

        label_8->setText(QCoreApplication::translate("MainWindow", "\350\277\234\347\250\213\346\270\251\345\272\246\347\233\221\346\265\213\346\230\276\347\244\272\347\273\210\347\253\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
