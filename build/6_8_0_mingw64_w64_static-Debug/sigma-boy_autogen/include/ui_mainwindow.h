/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frameCalendat;
    QLabel *label_3;
    QCalendarWidget *calendarWidget_2;
    QLabel *label_4;
    QFrame *frame_bot;
    QListWidget *listWidget_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(550, 1050);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frameCalendat = new QFrame(centralwidget);
        frameCalendat->setObjectName("frameCalendat");
        frameCalendat->setGeometry(QRect(0, 0, 550, 550));
        frameCalendat->setStyleSheet(QString::fromUtf8("background-color: #b3b3b3;"));
        frameCalendat->setFrameShape(QFrame::Shape::StyledPanel);
        frameCalendat->setFrameShadow(QFrame::Shadow::Raised);
        label_3 = new QLabel(frameCalendat);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(140, 120, 241, 191));
        calendarWidget_2 = new QCalendarWidget(frameCalendat);
        calendarWidget_2->setObjectName("calendarWidget_2");
        calendarWidget_2->setGeometry(QRect(0, 0, 550, 550));
        label_4 = new QLabel(frameCalendat);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(160, 450, 201, 61));
        frame_bot = new QFrame(centralwidget);
        frame_bot->setObjectName("frame_bot");
        frame_bot->setGeometry(QRect(0, 550, 550, 450));
        frame_bot->setStyleSheet(QString::fromUtf8("background-color: #808080;"));
        frame_bot->setFrameShape(QFrame::Shape::StyledPanel);
        frame_bot->setFrameShadow(QFrame::Shadow::Raised);
        listWidget_2 = new QListWidget(frame_bot);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        listWidget_2->setObjectName("listWidget_2");
        listWidget_2->setGeometry(QRect(40, 30, 481, 331));
        listWidget_2->setAutoFillBackground(false);
        listWidget_2->setGridSize(QSize(0, 40));
        listWidget_2->setViewMode(QListView::ViewMode::ListMode);
        pushButton = new QPushButton(frame_bot);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(380, 300, 131, 111));
        pushButton_2 = new QPushButton(frame_bot);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(150, 150, 231, 41));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 550, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\320\265\320\275\320\264\320\260\321\200\321\214", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\276\320\272", nullptr));

        const bool __sortingEnabled = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget_2->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "1 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget_2->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "2 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget_2->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "3 \320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        listWidget_2->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\267\320\260\320\277\320\270\321\201\321\214 \320\276 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\265", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\276\320\272\320\275\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
