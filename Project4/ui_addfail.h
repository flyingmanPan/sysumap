/********************************************************************************
** Form generated from reading UI file 'addfail.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFAIL_H
#define UI_ADDFAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_addFail
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *addFail)
    {
        if (addFail->objectName().isEmpty())
            addFail->setObjectName(QStringLiteral("addFail"));
        addFail->resize(400, 300);
        buttonBox = new QDialogButtonBox(addFail);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(addFail);
        QObject::connect(buttonBox, SIGNAL(accepted()), addFail, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addFail, SLOT(reject()));

        QMetaObject::connectSlotsByName(addFail);
    } // setupUi

    void retranslateUi(QDialog *addFail)
    {
        addFail->setWindowTitle(QApplication::translate("addFail", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class addFail: public Ui_addFail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFAIL_H
