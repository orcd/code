#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void read_file(); //读文件函数声明，用户自己写

private slots:
    void on_actionUtf_8_triggered();

    void on_actionGbk_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_as_triggered();

    void on_actionClose_triggered();

    void on_actionCut_triggered();

    void on_actionPaste_triggered();

    void on_actionCopy_triggered();

    void on_actionUndo_triggered();

    void on_actionComplie_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
