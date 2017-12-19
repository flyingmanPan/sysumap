/********************************************************************************
** Form generated from reading UI file 'createmeeting.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEMEETING_H
#define UI_CREATEMEETING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_createMeeting
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QDateTimeEdit *startdateTimeEdit;
    QDateTimeEdit *enddateTimeEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *createMeeting)
    {
        if (createMeeting->objectName().isEmpty())
            createMeeting->setObjectName(QStringLiteral("createMeeting"));
        createMeeting->resize(600, 300);
        centralwidget = new QWidget(createMeeting);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 90, 55, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 120, 91, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 150, 55, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 180, 55, 16));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 90, 113, 22));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 120, 113, 22));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 120, 81, 21));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(460, 10, 121, 261));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 230, 93, 28));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 230, 93, 28));
        startdateTimeEdit = new QDateTimeEdit(centralwidget);
        startdateTimeEdit->setObjectName(QStringLiteral("startdateTimeEdit"));
        startdateTimeEdit->setGeometry(QRect(180, 150, 194, 22));
        enddateTimeEdit = new QDateTimeEdit(centralwidget);
        enddateTimeEdit->setObjectName(QStringLiteral("enddateTimeEdit"));
        enddateTimeEdit->setGeometry(QRect(180, 180, 194, 22));
        createMeeting->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(createMeeting);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        createMeeting->setStatusBar(statusbar);

        retranslateUi(createMeeting);

        QMetaObject::connectSlotsByName(createMeeting);
    } // setupUi

    void retranslateUi(QMainWindow *createMeeting)
    {
        createMeeting->setWindowTitle(QApplication::translate("createMeeting", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("createMeeting", "\344\274\232\350\256\256\345\220\215\345\255\227", Q_NULLPTR));
        label_2->setText(QApplication::translate("createMeeting", "\345\217\202\344\270\216\344\272\272", Q_NULLPTR));
        label_3->setText(QApplication::translate("createMeeting", "\345\274\200\345\247\213\346\227\266\351\227\264", Q_NULLPTR));
        label_4->setText(QApplication::translate("createMeeting", "\347\273\223\346\235\237\346\227\266\351\227\264", Q_NULLPTR));
        pushButton->setText(QApplication::translate("createMeeting", "\346\267\273\345\212\240", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("createMeeting", "\345\256\214\346\210\220", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("createMeeting", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class createMeeting: public Ui_createMeeting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEMEETING_H
