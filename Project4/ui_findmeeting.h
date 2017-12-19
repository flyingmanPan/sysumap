/********************************************************************************
** Form generated from reading UI file 'findmeeting.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDMEETING_H
#define UI_FINDMEETING_H

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

class Ui_findMeeting
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label;
    QLineEdit *lineEdit;
    QDateTimeEdit *dateTimeEdit;
    QLabel *label_2;
    QDateTimeEdit *dateTimeEdit_2;
    QLabel *label_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *findMeeting)
    {
        if (findMeeting->objectName().isEmpty())
            findMeeting->setObjectName(QStringLiteral("findMeeting"));
        findMeeting->resize(857, 451);
        centralwidget = new QWidget(findMeeting);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(80, 30, 721, 241));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 290, 93, 28));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 290, 93, 28));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(470, 290, 93, 28));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(750, 390, 93, 28));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(350, 330, 91, 21));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(350, 390, 91, 21));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 330, 55, 16));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 330, 191, 22));
        dateTimeEdit = new QDateTimeEdit(centralwidget);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(150, 360, 194, 22));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 360, 55, 16));
        dateTimeEdit_2 = new QDateTimeEdit(centralwidget);
        dateTimeEdit_2->setObjectName(QStringLiteral("dateTimeEdit_2"));
        dateTimeEdit_2->setGeometry(QRect(150, 390, 194, 22));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 390, 55, 16));
        findMeeting->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(findMeeting);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        findMeeting->setStatusBar(statusbar);

        retranslateUi(findMeeting);

        QMetaObject::connectSlotsByName(findMeeting);
    } // setupUi

    void retranslateUi(QMainWindow *findMeeting)
    {
        findMeeting->setWindowTitle(QApplication::translate("findMeeting", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("findMeeting", "\346\210\221\345\217\221\350\265\267\347\232\204\344\274\232\350\256\256", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("findMeeting", "\346\210\221\345\217\202\344\270\216\347\232\204\344\274\232\350\256\256", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("findMeeting", "\346\210\221\345\212\240\345\205\245\347\232\204\344\274\232\350\256\256", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("findMeeting", "\350\277\224\345\233\236", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("findMeeting", "\346\240\207\351\242\230\346\237\245\350\257\242", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("findMeeting", "\346\227\266\351\227\264\346\237\245\350\257\242", Q_NULLPTR));
        label->setText(QApplication::translate("findMeeting", "\344\274\232\350\256\256\346\240\207\351\242\230", Q_NULLPTR));
        label_2->setText(QApplication::translate("findMeeting", "\350\265\267\345\247\213\346\227\266\351\227\264", Q_NULLPTR));
        label_3->setText(QApplication::translate("findMeeting", "\347\273\223\346\235\237\346\227\266\351\227\264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class findMeeting: public Ui_findMeeting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDMEETING_H
