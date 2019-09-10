#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <QStringListModel>
#include <QListWidgetItem>
#include <QProcess>
#include <QDir>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_open_clicked();

    void on_add_clicked();

    void on_remove_clicked();

    void on_split_clicked();

private:
    Ui::MainWindow *ui;
    QProcess *process;
    QStringListModel *model;
    QListWidgetItem *now;
    QString d[10],filename[10],start_time[10],end_time[10],queue[10];
    int h=0;
};

#endif // MAINWINDOW_H
