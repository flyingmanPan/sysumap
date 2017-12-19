/********************************************************************************
** Form generated from reading UI file 'emptyinput.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPTYINPUT_H
#define UI_EMPTYINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_emptyInput
{
public:
    QDialogButtonBox *buttonBox;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *emptyInput)
    {
        if (emptyInput->objectName().isEmpty())
            emptyInput->setObjectName(QStringLiteral("emptyInput"));
        emptyInput->resize(400, 300);
        buttonBox = new QDialogButtonBox(emptyInput);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textBrowser = new QTextBrowser(emptyInput);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(40, 30, 256, 192));

        retranslateUi(emptyInput);
        QObject::connect(buttonBox, SIGNAL(accepted()), emptyInput, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), emptyInput, SLOT(reject()));

        QMetaObject::connectSlotsByName(emptyInput);
    } // setupUi

    void retranslateUi(QDialog *emptyInput)
    {
        emptyInput->setWindowTitle(QApplication::translate("emptyInput", "Dialog", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("emptyInput", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\344\275\240\346\262\241\346\234\211\350\276\223\345\205\245\344\273\273\344\275\225\344\277\241\346\201\257\357\274\201</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class emptyInput: public Ui_emptyInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPTYINPUT_H
