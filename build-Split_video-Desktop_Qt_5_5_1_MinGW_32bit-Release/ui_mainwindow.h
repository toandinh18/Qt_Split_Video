/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(466, 590);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 20, 351, 421));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(50, 40, 258, 364));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        file = new QLineEdit(widget);
        file->setObjectName(QStringLiteral("file"));

        horizontalLayout->addWidget(file);

        open = new QPushButton(widget);
        open->setObjectName(QStringLiteral("open"));

        horizontalLayout->addWidget(open);


        verticalLayout->addLayout(horizontalLayout);

        start = new QLineEdit(widget);
        start->setObjectName(QStringLiteral("start"));

        verticalLayout->addWidget(start);

        end = new QLineEdit(widget);
        end->setObjectName(QStringLiteral("end"));

        verticalLayout->addWidget(end);

        add = new QPushButton(widget);
        add->setObjectName(QStringLiteral("add"));

        verticalLayout->addWidget(add);

        remove = new QPushButton(widget);
        remove->setObjectName(QStringLiteral("remove"));

        verticalLayout->addWidget(remove);

        list = new QListWidget(widget);
        list->setObjectName(QStringLiteral("list"));

        verticalLayout->addWidget(list);

        split = new QPushButton(widget);
        split->setObjectName(QStringLiteral("split"));

        verticalLayout->addWidget(split);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 466, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Home", 0));
        label->setText(QApplication::translate("MainWindow", "File", 0));
        open->setText(QApplication::translate("MainWindow", "Open", 0));
        start->setText(QApplication::translate("MainWindow", "Start time", 0));
        end->setText(QApplication::translate("MainWindow", "End time", 0));
        add->setText(QApplication::translate("MainWindow", "Add to queue", 0));
        remove->setText(QApplication::translate("MainWindow", "Remove from queue", 0));
        split->setText(QApplication::translate("MainWindow", "Split", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
