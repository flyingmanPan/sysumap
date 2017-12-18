/********************************************************************************
** Form generated from reading UI file 'map.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP_H
#define UI_MAP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapWidget
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *MapWidget)
    {
        if (MapWidget->objectName().isEmpty())
            MapWidget->setObjectName(QStringLiteral("MapWidget"));
        MapWidget->resize(975, 865);
        MapWidget->setStyleSheet(QLatin1String("#MapWidget {\n"
"	border-image:url(E:/Programming/Data Structure/Project4/sysumap/Project4/map.jpg)\n"
"}\n"
"\n"
"#MapWidget *{\n"
"	border-image: url()\n"
"}"));
        pushButton = new QPushButton(MapWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 560, 93, 28));

        retranslateUi(MapWidget);

        QMetaObject::connectSlotsByName(MapWidget);
    } // setupUi

    void retranslateUi(QWidget *MapWidget)
    {
        MapWidget->setWindowTitle(QApplication::translate("MapWidget", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MapWidget", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MapWidget: public Ui_MapWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_H
