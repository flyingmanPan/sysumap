/********************************************************************************
** Form generated from reading UI file 'regestersucceed.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGESTERSUCCEED_H
#define UI_REGESTERSUCCEED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_RegesterSucceed
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *RegesterSucceed)
    {
        if (RegesterSucceed->objectName().isEmpty())
            RegesterSucceed->setObjectName(QStringLiteral("RegesterSucceed"));
        RegesterSucceed->resize(400, 300);
        buttonBox = new QDialogButtonBox(RegesterSucceed);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(RegesterSucceed);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 130, 141, 16));

        retranslateUi(RegesterSucceed);
        QObject::connect(buttonBox, SIGNAL(accepted()), RegesterSucceed, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RegesterSucceed, SLOT(reject()));

        QMetaObject::connectSlotsByName(RegesterSucceed);
    } // setupUi

    void retranslateUi(QDialog *RegesterSucceed)
    {
        RegesterSucceed->setWindowTitle(QApplication::translate("RegesterSucceed", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("RegesterSucceed", "\346\210\220\345\212\237\346\263\250\345\206\214\357\274\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RegesterSucceed: public Ui_RegesterSucceed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGESTERSUCCEED_H
