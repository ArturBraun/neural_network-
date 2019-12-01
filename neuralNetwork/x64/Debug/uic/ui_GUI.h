/********************************************************************************
** Form generated from reading UI file 'GUI.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_H
#define UI_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUIClass
{
public:
    QAction *actionNowy;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QFrame *PushButtonsFrame;
    QGridLayout *gridLayout_2;
    QPushButton *LoadDataPushButton;
    QPushButton *RunProcessPushButton;
    QFrame *LogsFrame;
    QGridLayout *gridLayout;
    QLabel *LogsLabel;
    QTextEdit *LogsTextEdit;
    QMenuBar *menuBar;
    QMenu *menuPlik;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GUIClass)
    {
        if (GUIClass->objectName().isEmpty())
            GUIClass->setObjectName(QString::fromUtf8("GUIClass"));
        GUIClass->resize(600, 800);
        actionNowy = new QAction(GUIClass);
        actionNowy->setObjectName(QString::fromUtf8("actionNowy"));
        centralWidget = new QWidget(GUIClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        PushButtonsFrame = new QFrame(centralWidget);
        PushButtonsFrame->setObjectName(QString::fromUtf8("PushButtonsFrame"));
        PushButtonsFrame->setFrameShape(QFrame::StyledPanel);
        PushButtonsFrame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(PushButtonsFrame);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        LoadDataPushButton = new QPushButton(PushButtonsFrame);
        LoadDataPushButton->setObjectName(QString::fromUtf8("LoadDataPushButton"));

        gridLayout_2->addWidget(LoadDataPushButton, 0, 0, 1, 1);

        RunProcessPushButton = new QPushButton(PushButtonsFrame);
        RunProcessPushButton->setObjectName(QString::fromUtf8("RunProcessPushButton"));

        gridLayout_2->addWidget(RunProcessPushButton, 0, 1, 1, 1);


        gridLayout_3->addWidget(PushButtonsFrame, 0, 0, 1, 1);

        LogsFrame = new QFrame(centralWidget);
        LogsFrame->setObjectName(QString::fromUtf8("LogsFrame"));
        LogsFrame->setFrameShape(QFrame::StyledPanel);
        LogsFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(LogsFrame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        LogsLabel = new QLabel(LogsFrame);
        LogsLabel->setObjectName(QString::fromUtf8("LogsLabel"));
        QFont font;
        font.setPointSize(20);
        LogsLabel->setFont(font);

        gridLayout->addWidget(LogsLabel, 0, 0, 1, 1);

        LogsTextEdit = new QTextEdit(LogsFrame);
        LogsTextEdit->setObjectName(QString::fromUtf8("LogsTextEdit"));
        LogsTextEdit->setEnabled(true);
        LogsTextEdit->setReadOnly(true);

        gridLayout->addWidget(LogsTextEdit, 1, 0, 1, 1);


        gridLayout_3->addWidget(LogsFrame, 1, 0, 1, 1);

        GUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GUIClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 18));
        menuPlik = new QMenu(menuBar);
        menuPlik->setObjectName(QString::fromUtf8("menuPlik"));
        GUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GUIClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        GUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GUIClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        GUIClass->setStatusBar(statusBar);

        menuBar->addAction(menuPlik->menuAction());
        menuPlik->addAction(actionNowy);

        retranslateUi(GUIClass);

        QMetaObject::connectSlotsByName(GUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *GUIClass)
    {
        GUIClass->setWindowTitle(QCoreApplication::translate("GUIClass", "GUI", nullptr));
        actionNowy->setText(QCoreApplication::translate("GUIClass", "New", nullptr));
        LoadDataPushButton->setText(QCoreApplication::translate("GUIClass", "Load Data", nullptr));
        RunProcessPushButton->setText(QCoreApplication::translate("GUIClass", "Run Process", nullptr));
        LogsLabel->setText(QCoreApplication::translate("GUIClass", "Logs", nullptr));
        menuPlik->setTitle(QCoreApplication::translate("GUIClass", "FIle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GUIClass: public Ui_GUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H
