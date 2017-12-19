/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QTextBrowser *Location;
    QTextBrowser *Info;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *StartPtn;
    QLineEdit *EndPtn;
    QPushButton *StartDrive;
    QLabel *startPtnError;
    QLabel *EndPtnError;
    QPushButton *StartWalk;
    QRadioButton *NorthGate;
    QRadioButton *WestGate;
    QRadioButton *CrossRoad;
    QRadioButton *ZhiEr;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(975, 865);
        MainWindow->setCursor(QCursor(Qt::PointingHandCursor));
        MainWindow->setStyleSheet(QLatin1String("#MainWindow {\n"
"	border-image:url(E:/Programming/Data Structure/Project4/sysumap/Project4/map.jpg)\n"
"}\n"
"\n"
"#MainWindow *{\n"
"	border-image: url()\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(780, 220, 181, 41));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QStringLiteral(""));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(780, 640, 55, 31));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(780, 690, 55, 31));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        Location = new QTextBrowser(centralWidget);
        Location->setObjectName(QStringLiteral("Location"));
        Location->setGeometry(QRect(850, 640, 111, 31));
        Info = new QTextBrowser(centralWidget);
        Info->setObjectName(QStringLiteral("Info"));
        Info->setGeometry(QRect(850, 690, 111, 161));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(780, 33, 71, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(780, 73, 71, 31));
        label_4->setFont(font1);
        StartPtn = new QLineEdit(centralWidget);
        StartPtn->setObjectName(QStringLiteral("StartPtn"));
        StartPtn->setGeometry(QRect(850, 33, 101, 31));
        EndPtn = new QLineEdit(centralWidget);
        EndPtn->setObjectName(QStringLiteral("EndPtn"));
        EndPtn->setGeometry(QRect(850, 73, 101, 31));
        EndPtn->setStyleSheet(QStringLiteral(""));
        StartDrive = new QPushButton(centralWidget);
        StartDrive->setObjectName(QStringLiteral("StartDrive"));
        StartDrive->setGeometry(QRect(780, 120, 181, 41));
        startPtnError = new QLabel(centralWidget);
        startPtnError->setObjectName(QStringLiteral("startPtnError"));
        startPtnError->setGeometry(QRect(780, 270, 181, 16));
        QFont font2;
        font2.setPointSize(9);
        startPtnError->setFont(font2);
        startPtnError->setStyleSheet(QLatin1String("#startPtnError {\n"
"	color:red;\n"
"}\n"
""));
        EndPtnError = new QLabel(centralWidget);
        EndPtnError->setObjectName(QStringLiteral("EndPtnError"));
        EndPtnError->setGeometry(QRect(780, 300, 181, 16));
        EndPtnError->setFont(font2);
        EndPtnError->setStyleSheet(QLatin1String("#EndPtnError {\n"
"	color:red;\n"
"}"));
        StartWalk = new QPushButton(centralWidget);
        StartWalk->setObjectName(QStringLiteral("StartWalk"));
        StartWalk->setGeometry(QRect(780, 170, 181, 41));
        NorthGate = new QRadioButton(centralWidget);
        NorthGate->setObjectName(QStringLiteral("NorthGate"));
        NorthGate->setGeometry(QRect(504, 81, 95, 20));
        WestGate = new QRadioButton(centralWidget);
        WestGate->setObjectName(QStringLiteral("WestGate"));
        WestGate->setGeometry(QRect(350, 745, 95, 20));
        CrossRoad = new QRadioButton(centralWidget);
        CrossRoad->setObjectName(QStringLiteral("CrossRoad"));
        CrossRoad->setGeometry(QRect(530, 310, 95, 20));
        ZhiEr = new QRadioButton(centralWidget);
        ZhiEr->setObjectName(QStringLiteral("ZhiEr"));
        ZhiEr->setGeometry(QRect(440, 400, 95, 20));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\346\265\213\350\257\225\346\214\211\351\222\256", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\345\234\260\347\202\271\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\347\256\200\344\273\213\357\274\232", Q_NULLPTR));
        Location->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\345\207\272\345\217\221\345\234\260", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\347\233\256\347\232\204\345\234\260", Q_NULLPTR));
        StartDrive->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\345\257\274\350\210\252(\351\251\276\351\251\266)", Q_NULLPTR));
        startPtnError->setText(QString());
        EndPtnError->setText(QString());
        StartWalk->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\345\257\274\350\210\252(\346\255\245\350\241\214)", Q_NULLPTR));
        NorthGate->setText(QApplication::translate("MainWindow", "North Gate", Q_NULLPTR));
        WestGate->setText(QApplication::translate("MainWindow", "West Gate", Q_NULLPTR));
        CrossRoad->setText(QApplication::translate("MainWindow", "Cross Road", Q_NULLPTR));
        ZhiEr->setText(QApplication::translate("MainWindow", "ZhiEr", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
