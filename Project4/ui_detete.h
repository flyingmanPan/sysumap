/********************************************************************************
** Form generated from reading UI file 'detete.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETETE_H
#define UI_DETETE_H

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

class Ui_detete
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *detete)
    {
        if (detete->objectName().isEmpty())
            detete->setObjectName(QStringLiteral("detete"));
        detete->resize(400, 300);
        centralwidget = new QWidget(detete);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 110, 55, 16));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 180, 93, 28));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(210, 180, 93, 28));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(170, 110, 113, 22));
        detete->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(detete);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        detete->setStatusBar(statusbar);

        retranslateUi(detete);

        QMetaObject::connectSlotsByName(detete);
    } // setupUi

    void retranslateUi(QMainWindow *detete)
    {
        detete->setWindowTitle(QApplication::translate("detete", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("detete", "\344\274\232\350\256\256\345\220\215\347\247\260", Q_NULLPTR));
        pushButton->setText(QApplication::translate("detete", "\345\210\240\351\231\244", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("detete", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class detete: public Ui_detete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETETE_H
