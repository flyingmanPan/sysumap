/********************************************************************************
** Form generated from reading UI file 'loginfail.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINFAIL_H
#define UI_LOGINFAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_LoginFail
{
public:
    QDialogButtonBox *buttonBox;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *LoginFail)
    {
        if (LoginFail->objectName().isEmpty())
            LoginFail->setObjectName(QStringLiteral("LoginFail"));
        LoginFail->resize(400, 300);
        buttonBox = new QDialogButtonBox(LoginFail);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textBrowser = new QTextBrowser(LoginFail);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(60, 30, 256, 192));

        retranslateUi(LoginFail);
        QObject::connect(buttonBox, SIGNAL(accepted()), LoginFail, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), LoginFail, SLOT(reject()));

        QMetaObject::connectSlotsByName(LoginFail);
    } // setupUi

    void retranslateUi(QDialog *LoginFail)
    {
        LoginFail->setWindowTitle(QApplication::translate("LoginFail", "Dialog", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("LoginFail", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\231\273\345\275\225\345\244\261\350\264\245\357\274\201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\217\257\350\203\275\345\216\237\345\233\240:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  1.\347\224\250\346\210\267\345\220\215\346\234\252\346\263\250\345\206\214</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-"
                        "indent:0px;\">  2.\345\257\206\347\240\201\351\224\231\350\257\257</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginFail: public Ui_LoginFail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINFAIL_H
