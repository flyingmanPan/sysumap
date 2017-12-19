/********************************************************************************
** Form generated from reading UI file 'createmeetingfail.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEMEETINGFAIL_H
#define UI_CREATEMEETINGFAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_createMeetingFail
{
public:
    QDialogButtonBox *buttonBox;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *createMeetingFail)
    {
        if (createMeetingFail->objectName().isEmpty())
            createMeetingFail->setObjectName(QStringLiteral("createMeetingFail"));
        createMeetingFail->resize(400, 300);
        buttonBox = new QDialogButtonBox(createMeetingFail);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textBrowser = new QTextBrowser(createMeetingFail);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(70, 20, 256, 192));

        retranslateUi(createMeetingFail);
        QObject::connect(buttonBox, SIGNAL(accepted()), createMeetingFail, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), createMeetingFail, SLOT(reject()));

        QMetaObject::connectSlotsByName(createMeetingFail);
    } // setupUi

    void retranslateUi(QDialog *createMeetingFail)
    {
        createMeetingFail->setWindowTitle(QApplication::translate("createMeetingFail", "Dialog", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("createMeetingFail", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\210\233\345\273\272\344\274\232\350\256\256\345\244\261\350\264\245\357\274\201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\217\257\350\203\275\345\216\237\345\233\240:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  -\344\274\232\350\256\256\345\220\215\347\247\260\351\207\215\345\244\215</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -q"
                        "t-block-indent:0; text-indent:0px;\">  -\346\227\245\346\234\237\346\240\274\345\274\217\351\224\231\350\257\257</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  -\346\227\245\346\234\237\351\200\273\350\276\221\351\224\231\350\257\257</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  -\346\262\241\346\234\211\351\202\200\350\257\267\344\273\273\344\275\225\345\217\202\344\270\216\350\200\205</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  -\345\217\221\350\265\267\350\200\205/\345\217\202\344\270\216\350\200\205\345\234\250\350\257\245\346\256\265\346\227\266\351\227\264\344\270\255\345\277\231</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  </p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class createMeetingFail: public Ui_createMeetingFail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEMEETINGFAIL_H
