#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QDebug>
#include <QMediaPlayer>
#include <QProcess>
#include <QDir>
#include <QFileInfo>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    process =new QProcess(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_open_clicked()
{
    filename[h] = QFileDialog::getOpenFileName(this,
                                            tr("Open File"),
                                            "D://Picture/dalat_trip_with_her",
                                            "MP4 (*.mp4);; MP3 (*.mp3);; WMV (*.wmv)"
                                            ) ;
    ui->file->setText(filename[h]);
    d[h]= QFileInfo(filename[h]).baseName();
    qDebug()<<d[h];
}


void MainWindow::on_add_clicked()
{
    start_time[h]=ui->start->text();
    end_time[h] = ui->end->text();
    queue[h]= start_time[h] + " >"+ end_time[h]+" >" +filename[h];
    ui->list->addItem(queue[h]);
    h++;
}

void MainWindow::on_remove_clicked()
{
    int t =ui->list->currentRow();
    filename[t] ="";
    now = ui->list->takeItem(ui->list->currentRow());
    delete now;
}

void MainWindow::on_split_clicked()
{
    QString program = "D:/Chuyen_nganh/ffmpeg/ffmpeg/bin/ffmpeg";
    for(int i=0;i<=h;i++) {
        if(filename[i]!=""){
            QString output = "D:/Picture/dalat_trip_with_her/output/"+ d[i]+".mp4";
            QStringList arguments;
            arguments << "-i" << filename[i] << "-vcodec" << "copy" << "-acodec" << "copy" << "-ss" << start_time[i] << "-to" << end_time[i] << output;
            qDebug() << arguments;
            process->start(program,arguments);
            if(process->waitForStarted()){
                qDebug() << "starting";
            }
            process->waitForFinished(-1);
                qDebug() << "finish";
        }
    }
}
