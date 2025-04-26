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
#include <QtWidgets/QListView>
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
    QCalendarWidget *calendarWidget;
    QLabel *label_4;
    QFrame *frame_bot;
    QPushButton *pushButton_addnote;
    QListView *listView_note;
    QListWidget *listWidget_notes;
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
        calendarWidget = new QCalendarWidget(frameCalendat);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(0, 0, 550, 550));
        label_4 = new QLabel(frameCalendat);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(80, 500, 201, 61));
        frame_bot = new QFrame(centralwidget);
        frame_bot->setObjectName("frame_bot");
        frame_bot->setGeometry(QRect(0, 550, 550, 450));
        frame_bot->setStyleSheet(QString::fromUtf8("background-color: #808080;"));
        frame_bot->setFrameShape(QFrame::Shape::StyledPanel);
        frame_bot->setFrameShadow(QFrame::Shadow::Raised);
        pushButton_addnote = new QPushButton(frame_bot);
        pushButton_addnote->setObjectName("pushButton_addnote");
        pushButton_addnote->setGeometry(QRect(470, 370, 51, 51));
        QFont font;
        font.setPointSize(20);
        font.setWeight(QFont::Black);
        font.setItalic(false);
        pushButton_addnote->setFont(font);
        listView_note = new QListView(frame_bot);
        listView_note->setObjectName("listView_note");
        listView_note->setGeometry(QRect(15, 15, 520, 420));
        listView_note->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"background-color: rgb(0, 170, 127);"));
        listWidget_notes = new QListWidget(frame_bot);
        listWidget_notes->setObjectName("listWidget_notes");
        listWidget_notes->setGeometry(QRect(15, 15, 520, 420));
        listWidget_notes->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(170, 255, 197);"));
        listView_note->raise();
        listWidget_notes->raise();
        pushButton_addnote->raise();
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
        pushButton_addnote->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
