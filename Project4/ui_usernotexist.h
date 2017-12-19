/********************************************************************************
** Form generated from reading UI file 'usernotexist.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERNOTEXIST_H
#define UI_USERNOTEXIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_userNotExist
{
public:
    QDialogButtonBox *buttonBox;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *userNotExist)
    {
        if (userNotExist->objectName().isEmpty())
            userNotExist->setObjectName(QStringLiteral("userNotExist"));
        userNotExist->resize(400, 300);
        buttonBox = new QDialogButtonBox(userNotExist);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(290, 20, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textBrowser = new QTextBrowser(userNotExist);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 20, 256, 192));

        retranslateUi(userNotExist);
        QObject::connect(buttonBox, SIGNAL(accepted()), userNotExist, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), userNotExist, SLOT(reject()));

        QMetaObject::connectSlotsByName(userNotExist);
    } // setupUi

    void retranslateUi(QDialog *userNotExist)
    {
        userNotExist->setWindowTitle(QApplication::translate("userNotExist", "Dialog", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("userNotExist", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\223\215\344\275\234\345\244\261\350\264\245\357\274\201</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\351\224\231\350\257\257\344\277\241\346\201\257:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">  -\347\224\250\346\210\267\344\270\215\345\255\230\345\234\250</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class userNotExist: public Ui_userNotExist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERNOTEXIST_H
