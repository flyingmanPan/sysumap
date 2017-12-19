#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPoint>
#include <vector>

using namespace std;

typedef struct myLine {
    QPoint startPtn;
    QPoint endPtn;
}myLine;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QPoint stratPtn;
    QPoint endPtn;
    vector<myLine*> lines;


protected:
void paintEvent(QPaintEvent *);

private slots:
void on_pushButton_clicked();
void on_StartDrive_clicked();
void on_StartWalk_clicked();
};

#endif // MAINWINDOW_H
