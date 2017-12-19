/********************************************************************************
** Form generated from reading UI file 'regesterfail.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGESTERFAIL_H
#define UI_REGESTERFAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_RegesterFail
{
public:
    QDialogButtonBox *buttonBox;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *RegesterFail)
    {
        if (RegesterFail->objectName().isEmpty())
            RegesterFail->setObjectName(QStringLiteral("RegesterFail"));
        RegesterFail->resize(400, 300);
        buttonBox = new QDialogButtonBox(RegesterFail);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textBrowser = new QTextBrowser(RegesterFail);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(70, 30, 256, 192));

        retranslateUi(RegesterFail);
        QObject::connect(buttonBox, SIGNAL(accepted()), RegesterFail, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RegesterFail, SLOT(reject()));

        QMetaObject::connectSlotsByName(RegesterFail);
    } // setupUi

    void retranslateUi(QDialog *RegesterFail)
    {
        RegesterFail->setWindowTitle(QApplication::translate("RegesterFail", "Dialog", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("RegesterFail", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\263\250\345\206\214\345\244\261\350\264\245\357\274\201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\217\257\350\203\275\345\216\237\345\233\240\357\274\232</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  1.\347\224\250\346\210\267\345\220\215\345\267\262\345\255\230\345\234\250</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-inde"
                        "nt:0; text-indent:0px;\">  2.\351\202\256\347\256\261\346\240\274\345\274\217\351\224\231\350\257\257</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  3.\346\211\213\346\234\272\345\217\267\347\240\201\346\227\240\346\225\210</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RegesterFail: public Ui_RegesterFail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGESTERFAIL_H
