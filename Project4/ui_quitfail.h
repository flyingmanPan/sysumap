/********************************************************************************
** Form generated from reading UI file 'quitfail.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUITFAIL_H
#define UI_QUITFAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_quitFail
{
public:
    QDialogButtonBox *buttonBox;
    QTextEdit *textEdit;

    void setupUi(QDialog *quitFail)
    {
        if (quitFail->objectName().isEmpty())
            quitFail->setObjectName(QStringLiteral("quitFail"));
        quitFail->resize(400, 300);
        buttonBox = new QDialogButtonBox(quitFail);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textEdit = new QTextEdit(quitFail);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(70, 40, 251, 171));

        retranslateUi(quitFail);
        QObject::connect(buttonBox, SIGNAL(accepted()), quitFail, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), quitFail, SLOT(reject()));

        QMetaObject::connectSlotsByName(quitFail);
    } // setupUi

    void retranslateUi(QDialog *quitFail)
    {
        quitFail->setWindowTitle(QApplication::translate("quitFail", "Dialog", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("quitFail", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\351\200\200\345\207\272\345\244\261\350\264\245\357\274\201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\217\257\350\203\275\345\216\237\345\233\240:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  -\350\276\223\345\205\245\351\224\231\350\257\257</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class quitFail: public Ui_quitFail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUITFAIL_H
