/********************************************************************************
** Form generated from reading UI file 'meetingmanagement.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEETINGMANAGEMENT_H
#define UI_MEETINGMANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_meetingManagement
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *meetingManagement)
    {
        if (meetingManagement->objectName().isEmpty())
            meetingManagement->setObjectName(QStringLiteral("meetingManagement"));
        meetingManagement->resize(558, 287);
        centralwidget = new QWidget(meetingManagement);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 200, 93, 28));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(40, 30, 481, 151));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 200, 93, 28));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(420, 200, 93, 28));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(300, 200, 93, 28));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 10, 141, 20));
        meetingManagement->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(meetingManagement);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        meetingManagement->setStatusBar(statusbar);

        retranslateUi(meetingManagement);

        QMetaObject::connectSlotsByName(meetingManagement);
    } // setupUi

    void retranslateUi(QMainWindow *meetingManagement)
    {
        meetingManagement->setWindowTitle(QApplication::translate("meetingManagement", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("meetingManagement", "\345\242\236\345\212\240\346\210\220\345\221\230", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("meetingManagement", "\347\247\273\351\231\244\346\210\220\345\221\230", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("meetingManagement", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("meetingManagement", "\345\210\240\351\231\244\344\274\232\350\256\256", Q_NULLPTR));
        label->setText(QApplication::translate("meetingManagement", "\344\275\240\345\210\233\345\273\272\347\232\204\344\274\232\350\256\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class meetingManagement: public Ui_meetingManagement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEETINGMANAGEMENT_H
