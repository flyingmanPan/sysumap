/********************************************************************************
** Form generated from reading UI file 'deletefail.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEFAIL_H
#define UI_DELETEFAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_deleteFail
{
public:
    QDialogButtonBox *buttonBox;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *deleteFail)
    {
        if (deleteFail->objectName().isEmpty())
            deleteFail->setObjectName(QStringLiteral("deleteFail"));
        deleteFail->resize(400, 300);
        buttonBox = new QDialogButtonBox(deleteFail);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textBrowser = new QTextBrowser(deleteFail);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(50, 30, 256, 192));

        retranslateUi(deleteFail);
        QObject::connect(buttonBox, SIGNAL(accepted()), deleteFail, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), deleteFail, SLOT(reject()));

        QMetaObject::connectSlotsByName(deleteFail);
    } // setupUi

    void retranslateUi(QDialog *deleteFail)
    {
        deleteFail->setWindowTitle(QApplication::translate("deleteFail", "Dialog", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("deleteFail", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\210\240\351\231\244\345\244\261\350\264\245\357\274\201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\217\257\350\203\275\345\216\237\345\233\240\357\274\232</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  -\344\274\232\350\256\256\344\270\215\345\255\230\345\234\250</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-in"
                        "dent:0px;\">  -\344\275\240\344\270\215\346\230\257\344\274\232\350\256\256\347\232\204\345\217\221\350\265\267\350\200\205</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class deleteFail: public Ui_deleteFail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEFAIL_H
