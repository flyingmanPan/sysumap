/********************************************************************************
** Form generated from reading UI file 'quitmeeting.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUITMEETING_H
#define UI_QUITMEETING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_quitMeeting
{
public:
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *quitMeeting)
    {
        if (quitMeeting->objectName().isEmpty())
            quitMeeting->setObjectName(QStringLiteral("quitMeeting"));
        quitMeeting->resize(751, 453);
        centralwidget = new QWidget(quitMeeting);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(60, 30, 621, 261));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 330, 55, 16));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(140, 330, 113, 22));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 330, 93, 28));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(620, 390, 93, 28));
        quitMeeting->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(quitMeeting);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        quitMeeting->setStatusBar(statusbar);

        retranslateUi(quitMeeting);

        QMetaObject::connectSlotsByName(quitMeeting);
    } // setupUi

    void retranslateUi(QMainWindow *quitMeeting)
    {
        quitMeeting->setWindowTitle(QApplication::translate("quitMeeting", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("quitMeeting", "\344\274\232\350\256\256\345\220\215\347\247\260", Q_NULLPTR));
        pushButton->setText(QApplication::translate("quitMeeting", "\351\200\200\345\207\272", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("quitMeeting", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class quitMeeting: public Ui_quitMeeting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUITMEETING_H
