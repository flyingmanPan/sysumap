/********************************************************************************
** Form generated from reading UI file 'removefail.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEFAIL_H
#define UI_REMOVEFAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_removeFail
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *textEdit;

    void setupUi(QDialog *removeFail)
    {
        if (removeFail->objectName().isEmpty())
            removeFail->setObjectName(QStringLiteral("removeFail"));
        removeFail->resize(400, 300);
        buttonBox = new QDialogButtonBox(removeFail);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textEdit = new QTextEdit(removeFail);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(60, 40, 271, 171));

        retranslateUi(removeFail);
        QObject::connect(buttonBox, SIGNAL(accepted()), removeFail, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), removeFail, SLOT(reject()));

        QMetaObject::connectSlotsByName(removeFail);
    } // setupUi

    void retranslateUi(QDialog *removeFail)
    {
        removeFail->setWindowTitle(QApplication::translate("removeFail", "Dialog", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("removeFail", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\347\247\273\351\231\244\345\244\261\350\264\245\357\274\201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\217\257\350\203\275\345\216\237\345\233\240:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  -\350\257\245\347\224\250\346\210\267\344\270\215\345\234\250\344\274\232\350\256\256\344\270\255</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -q"
                        "t-block-indent:0; text-indent:0px;\">  -\344\274\201\345\233\276\347\247\273\351\231\244\345\217\221\350\265\267\344\272\272</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class removeFail: public Ui_removeFail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEFAIL_H
