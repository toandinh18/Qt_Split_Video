/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *file;
    QPushButton *open;
    QLineEdit *start;
    QLineEdit *end;
    QPushButton *add;
    QPushButton *remove;
    QListWidget *list;
    QPushButton *split;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(466, 590);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 351, 421));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(50, 40, 258, 364));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        file = new QLineEdit(widget);
        file->setObjectName(QString::fromUtf8("file"));

        horizontalLayout->addWidget(file);

        open = new QPushButton(widget);
        open->setObjectName(QString::fromUtf8("open"));

        horizontalLayout->addWidget(open);


        verticalLayout->addLayout(horizontalLayout);

        start = new QLineEdit(widget);
        start->setObjectName(QString::fromUtf8("start"));

        verticalLayout->addWidget(start);

        end = new QLineEdit(widget);
        end->setObjectName(QString::fromUtf8("end"));

        verticalLayout->addWidget(end);

        add = new QPushButton(widget);
        add->setObjectName(QString::fromUtf8("add"));

        verticalLayout->addWidget(add);

        remove = new QPushButton(widget);
        remove->setObjectName(QString::fromUtf8("remove"));

        verticalLayout->addWidget(remove);

        list = new QListWidget(widget);
        list->setObjectName(QString::fromUtf8("list"));

        verticalLayout->addWidget(list);

        split = new QPushButton(widget);
        split->setObjectName(QString::fromUtf8("split"));

        verticalLayout->addWidget(split);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 466, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Home", nullptr));
        label->setText(QApplication::translate("MainWindow", "File", nullptr));
        open->setText(QApplication::translate("MainWindow", "Open", nullptr));
        start->setText(QApplication::translate("MainWindow", "Start time", nullptr));
        end->setText(QApplication::translate("MainWindow", "End time", nullptr));
        add->setText(QApplication::translate("MainWindow", "Add to queue", nullptr));
        remove->setText(QApplication::translate("MainWindow", "Remove from queue", nullptr));
        split->setText(QApplication::translate("MainWindow", "Split", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
