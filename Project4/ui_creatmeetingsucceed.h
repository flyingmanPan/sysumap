/********************************************************************************
** Form generated from reading UI file 'creatmeetingsucceed.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATMEETINGSUCCEED_H
#define UI_CREATMEETINGSUCCEED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_creatMeetingSucceed
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *creatMeetingSucceed)
    {
        if (creatMeetingSucceed->objectName().isEmpty())
            creatMeetingSucceed->setObjectName(QStringLiteral("creatMeetingSucceed"));
        creatMeetingSucceed->resize(400, 300);
        buttonBox = new QDialogButtonBox(creatMeetingSucceed);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(creatMeetingSucceed);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 110, 161, 16));

        retranslateUi(creatMeetingSucceed);
        QObject::connect(buttonBox, SIGNAL(accepted()), creatMeetingSucceed, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), creatMeetingSucceed, SLOT(reject()));

        QMetaObject::connectSlotsByName(creatMeetingSucceed);
    } // setupUi

    void retranslateUi(QDialog *creatMeetingSucceed)
    {
        creatMeetingSucceed->setWindowTitle(QApplication::translate("creatMeetingSucceed", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("creatMeetingSucceed", "\345\210\233\345\273\272\344\274\232\350\256\256\346\210\220\345\212\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class creatMeetingSucceed: public Ui_creatMeetingSucceed {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATMEETINGSUCCEED_H
