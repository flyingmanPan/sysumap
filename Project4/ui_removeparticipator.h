/********************************************************************************
** Form generated from reading UI file 'removeparticipator.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEPARTICIPATOR_H
#define UI_REMOVEPARTICIPATOR_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_removeParticipator
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *removeParticipator)
    {
        if (removeParticipator->objectName().isEmpty())
            removeParticipator->setObjectName(QStringLiteral("removeParticipator"));
        removeParticipator->resize(400, 300);
        centralwidget = new QWidget(removeParticipator);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 90, 55, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 120, 55, 16));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 90, 113, 22));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(150, 120, 113, 22));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 180, 93, 28));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 180, 93, 28));
        removeParticipator->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(removeParticipator);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        removeParticipator->setStatusBar(statusbar);

        retranslateUi(removeParticipator);

        QMetaObject::connectSlotsByName(removeParticipator);
    } // setupUi

    void retranslateUi(QMainWindow *removeParticipator)
    {
        removeParticipator->setWindowTitle(QApplication::translate("removeParticipator", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("removeParticipator", "\344\274\232\350\256\256\345\220\215\347\247\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("removeParticipator", "\346\210\220\345\221\230\345\220\215\347\247\260", Q_NULLPTR));
        pushButton->setText(QApplication::translate("removeParticipator", "\347\247\273\351\231\244", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("removeParticipator", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class removeParticipator: public Ui_removeParticipator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEPARTICIPATOR_H
