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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frameCalendat;
    QCalendarWidget *calendarWidget;
    QLabel *label;
    QFrame *frame_bot;
    QListWidget *listWidget_notes;
    QLabel *label_2;
    QPushButton *pushButton_addnote;
    QPushButton *pushButton_checkStatistic;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(550, 1100);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frameCalendat = new QFrame(centralwidget);
        frameCalendat->setObjectName("frameCalendat");
        frameCalendat->setGeometry(QRect(0, 0, 550, 550));
        frameCalendat->setStyleSheet(QString::fromUtf8("    /* \320\236\321\201\320\275\320\276\320\262\320\275\321\213\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 */\n"
"    background-color: #cecece;               /* \320\221\320\265\320\273\321\213\320\271 \321\204\320\276\320\275 \320\264\320\273\321\217 \320\273\321\203\321\207\321\210\320\265\320\263\320\276 \320\272\320\276\320\275\321\202\321\200\320\260\321\201\321\202\320\260 */\n"
"    border: 1px solid #CFD8DC;              /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \321\206\320\262\320\265\321\202\320\260 \"\321\201\320\265\321\200\320\265\320\261\321\200\320\270\321\201\321\202\321\213\320\271 \321\202\321\203\320\274\320\260\320\275\" */\n"
"    border-radius: 8px;                     /* \320\221\320\276\320\273\320\265\320\265 \320\277\320\273\320\260\320\262\320\275\321\213\320\265 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 6px;\n"
"    font-family: 'Segoe UI', system-ui;      /* "
                        "\320\221\320\276\320\273\320\265\320\265 \321\201\320\276\320\262\321\200\320\265\320\274\320\265\320\275\320\275\321\213\320\271 \321\201\321\202\320\265\320\272 \321\210\321\200\320\270\321\204\321\202\320\276\320\262 */\n"
"    font-size: 15px;                        /* \320\243\320\262\320\265\320\273\320\270\321\207\320\265\320\275\320\275\321\213\320\271 \321\200\320\260\320\267\320\274\320\265\321\200 */\n"
"    font-weight: 500;                       /* \320\237\320\276\320\273\321\203\320\266\320\270\321\200\320\275\321\213\320\271 \320\264\320\273\321\217 \320\273\321\203\321\207\321\210\320\265\320\271 \321\207\320\270\321\202\320\260\320\265\320\274\320\276\321\201\321\202\320\270 */\n"
"    color: #263238;                         /* \320\223\320\273\321\203\320\261\320\276\320\272\320\270\320\271 \321\201\320\270\320\275\320\265-\321\201\320\265\321\200\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    outline: none;\n"
"    alternate-back"
                        "ground-color: #F8F9FA;     /* \320\236\321\207\320\265\320\275\321\214 \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \321\201\320\265\321\200\321\213\320\271 \320\264\320\273\321\217 \321\207\320\265\321\200\320\265\320\264\320\276\320\262\320\260\320\275\320\270\321\217 */"));
        frameCalendat->setFrameShape(QFrame::Shape::StyledPanel);
        frameCalendat->setFrameShadow(QFrame::Shadow::Raised);
        calendarWidget = new QCalendarWidget(frameCalendat);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setGeometry(QRect(0, 0, 550, 550));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setWeight(QFont::Medium);
        font.setItalic(false);
        font.setUnderline(false);
        calendarWidget->setFont(font);
        calendarWidget->setAutoFillBackground(false);
        calendarWidget->setStyleSheet(QString::fromUtf8("\n"
"QCalendarWidget {\n"
"    background-color: #e0f8e0;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 8px;\n"
"}\n"
"\n"
"QCalendarWidget QToolButton {\n"
"    background-color: #a8d5a8;\n"
"    color: black;\n"
"    border: none;\n"
"    border-radius: 4px;\n"
"    padding: 5px;\n"
"    font-family: \"Arial\";\n"
"    font-size: 12pt;\n"
"    font-style: italic;\n"
"}\n"
"\n"
"QCalendarWidget QToolButton:hover {\n"
"    background-color: #8fc98f;\n"
"}\n"
"\n"
"QCalendarWidget QWidget#qt_calendar_navigationbar {\n"
"    background-color: #a8d5a8;\n"
"    border-top-left-radius: 8px;\n"
"    border-top-right-radius: 8px;\n"
"}\n"
"\n"
"QCalendarWidget QMenu {\n"
"    background-color: #e0f8e0;\n"
"    border: 1px solid #ccc;\n"
"    font-family: \"Arial\";\n"
"    font-size: 12pt;\n"
"    font-style: italic;\n"
"}\n"
"\n"
"QCalendarWidget QSpinBox {\n"
"    margin: 2px;\n"
"}\n"
"\n"
"QCalendarWidget QSpinBox::up-button, QCalendarWidget QSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
""
                        "    subcontrol-position: top right;\n"
"}\n"
"\n"
"QCalendarWidget QSpinBox::up-arrow, QCalendarWidget QSpinBox::down-arrow {\n"
"    width: 10px;\n"
"    height: 10px;\n"
"}\n"
"\n"
"QCalendarWidget QTableView {\n"
"    border-width: 0px;\n"
"}\n"
"\n"
"QCalendarWidget QTableView:enabled {\n"
"    color: black;\n"
"    font-family: \"Arial\";\n"
"    font-size: 12pt;\n"
"    font-style: italic;\n"
"}\n"
"\n"
"QCalendarWidget QTableView:selected {\n"
"    background-color: #c4dfb4;\n"
"    color: black;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QCalendarWidget QTableView QWidget {\n"
"    background-color: none;\n"
"    margin: 2px;\n"
"}\n"
"\n"
"\n"
"QCalendarWidget QToolButton {\n"
"    background-color: transparent;\n"
"    color: #4CAF50;\n"
"    border: none;\n"
"    padding: 5px;\n"
"    font-family: \"Arial\";\n"
"    font-size: 12pt;\n"
"}\n"
"\n"
"QCalendarWidget QToolButton#qt_calendar_prevmonth, \n"
"QCalendarWidget QToolButton#qt_calendar_nextmonth {\n"
"    border-radius: 15px;\n"
"    width: 30"
                        "px;\n"
"    height: 30px;\n"
"}\n"
"\n"
"QCalendarWidget QToolButton#qt_calendar_prevmonth:hover, \n"
"QCalendarWidget QToolButton#qt_calendar_nextmonth:hover {\n"
"    background-color: #e8f5e9; /* \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \320\267\320\265\320\273\320\265\320\275\321\213\320\271 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QCalendarWidget QWidget#qt_calendar_navigationbar {\n"
"    background-color: #a8d5a8;\n"
"    border-top-left-radius: 8px;\n"
"    border-top-right-radius: 8px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QCalendarWidget QToolButton::menu-indicator {\n"
"    image: none;\n"
"}\n"
"\n"
""));
        calendarWidget->setGridVisible(false);
        calendarWidget->setSelectionMode(QCalendarWidget::SelectionMode::SingleSelection);
        calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::HorizontalHeaderFormat::ShortDayNames);
        calendarWidget->setNavigationBarVisible(true);
        calendarWidget->setDateEditEnabled(true);
        label = new QLabel(frameCalendat);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 0, 181, 40));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setWeight(QFont::Medium);
        label->setFont(font1);
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: rgba(0, 0, 0, 0);\n"
"    border: none;\n"
"color: #006400; /* \321\215\321\202\320\276 \320\275\320\260\321\201\321\213\321\211\320\265\320\275\320\275\321\213\320\271 \321\202\320\265\320\274\320\275\320\276-\320\267\320\265\320\273\321\221\320\275\321\213\320\271 */\n"
"}"));
        frame_bot = new QFrame(centralwidget);
        frame_bot->setObjectName("frame_bot");
        frame_bot->setGeometry(QRect(0, 550, 550, 450));
        frame_bot->setStyleSheet(QString::fromUtf8("background-color: #808080;\n"
"background-color: #e0f8e0;\n"
"background-color: #a8d5a8;"));
        frame_bot->setFrameShape(QFrame::Shape::StyledPanel);
        frame_bot->setFrameShadow(QFrame::Shadow::Raised);
        listWidget_notes = new QListWidget(frame_bot);
        listWidget_notes->setObjectName("listWidget_notes");
        listWidget_notes->setGeometry(QRect(15, 34, 520, 401));
        listWidget_notes->setStyleSheet(QString::fromUtf8("QListView {\n"
"    /* \320\236\321\201\320\275\320\276\320\262\320\275\321\213\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 */\n"
"    background-color: #dbdbdb;              \n"
"    border: 1px solid #CFD8DC;              /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \321\206\320\262\320\265\321\202\320\260 \"\321\201\320\265\321\200\320\265\320\261\321\200\320\270\321\201\321\202\321\213\320\271 \321\202\321\203\320\274\320\260\320\275\" */\n"
"    border-radius: 8px;                     /* \320\221\320\276\320\273\320\265\320\265 \320\277\320\273\320\260\320\262\320\275\321\213\320\265 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 6px;\n"
"    font-family: 'Segoe UI', system-ui;      /* \320\221\320\276\320\273\320\265\320\265 \321\201\320\276\320\262\321\200\320\265\320\274\320\265\320\275\320\275\321\213\320\271 \321\201\321\202\320\265\320\272 \321\210\321\200\320\270\321\204\321\202\320\276"
                        "\320\262 */\n"
"    font-size: 15px;                        /* \320\243\320\262\320\265\320\273\320\270\321\207\320\265\320\275\320\275\321\213\320\271 \321\200\320\260\320\267\320\274\320\265\321\200 */\n"
"    font-weight: 500;                       /* \320\237\320\276\320\273\321\203\320\266\320\270\321\200\320\275\321\213\320\271 \320\264\320\273\321\217 \320\273\321\203\321\207\321\210\320\265\320\271 \321\207\320\270\321\202\320\260\320\265\320\274\320\276\321\201\321\202\320\270 */\n"
"    color: #263238;                         /* \320\223\320\273\321\203\320\261\320\276\320\272\320\270\320\271 \321\201\320\270\320\275\320\265-\321\201\320\265\321\200\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    outline: none;\n"
"    alternate-background-color: #F8F9FA;     /* \320\236\321\207\320\265\320\275\321\214 \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \321\201\320\265\321\200\321\213\320\271 \320\264\320\273\321\217 \321\207\320\265\321"
                        "\200\320\265\320\264\320\276\320\262\320\260\320\275\320\270\321\217 */\n"
"}\n"
"\n"
"/* \320\241\321\202\320\270\320\273\321\214 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262 \321\201\320\277\320\270\321\201\320\272\320\260 */\n"
"QListView::item {\n"
"	border-radius: 8;\n"
"	background-color: #fff;			 /*  */\n"
"    height: 36px;                           /* \320\243\320\262\320\265\320\273\320\270\321\207\320\265\320\275\320\275\320\260\321\217 \320\262\321\213\321\201\320\276\321\202\320\260 */\n"
"    padding: 8px 12px;                      /* \320\221\320\276\320\273\321\214\321\210\320\265 \320\262\320\275\321\203\321\202\321\200\320\265\320\275\320\275\320\270\321\205 \320\276\321\202\321\201\321\202\321\203\320\277\320\276\320\262 */\n"
"    border-bottom: 1px solid #ECEFF1;       /* \320\221\320\276\320\273\320\265\320\265 \321\202\320\276\320\275\320\272\320\270\320\271 \321\200\320\260\320\267\320\264\320\265\320\273\320\270\321\202\320\265\320\273\321\214 */\n"
"    mar"
                        "gin: 2px 0;                          /* \320\236\321\202\321\201\321\202\321\203\320\277 \320\274\320\265\320\266\320\264\321\203 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\260\320\274\320\270 */\n"
"}\n"
"\n"
"/* \320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"QListView::item:hover {\n"
"    background-color: #E1F5FE;              /* \320\241\320\262\320\265\321\202\320\273\320\276-\320\263\320\276\320\273\321\203\320\261\320\276\320\271 \321\201 \320\276\321\202\321\202\320\265\320\275\320\272\320\276\320\274 */\n"
"    color: #0277BD;                        /* \320\235\320\260\321\201\321\213\321\211\320\265\320\275\320\275\321\213\320\271 \321\201\320\270\320\275\320\270\320\271 */\n"
"    font-weight: 600;                      /* \320\225\321\211\320\265 \320\261\320\276\320\273\320\265\320\265 \320\266\320\270\321\200\320\275\321\213\320\271 \320\277\321\200\320"
                        "\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"    border-left: 3px solid #42A5F5;        /* \320\220\320\272\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \320\277\320\276\320\273\320\276\321\201\320\260 \321\201\320\273\320\265\320\262\320\260 */\n"
"    padding-left: 9px;                     /* \320\232\320\276\320\274\320\277\320\265\320\275\321\201\320\260\321\206\320\270\321\217 \320\264\320\273\321\217 \320\277\320\276\320\273\320\276\321\201\321\213 */\n"
"}\n"
"\n"
"\n"
"/* \320\237\320\276\320\273\320\276\321\201\320\260 \320\277\321\200\320\276\320\272\321\200\321\203\321\202\320\272\320\270 - \321\201\320\276\320\262\321\200\320\265\320\274\320\265\320\275\320\275\321\213\320\271 \320\264\320\270\320\267\320\260\320\271\320\275 */\n"
"QScrollBar:vertical {\n"
"    border: none;\n"
"    background: #F5F5F5;\n"
"    width: 12px;\n"
"    margin: 0px;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background: #90A4AE;    "
                        "               /* \320\241\320\265\321\200\320\276-\320\263\320\276\320\273\321\203\320\261\320\276\320\271 \320\277\320\276\320\273\320\267\321\203\320\275\320\276\320\272 */\n"
"    border-radius: 6px;\n"
"    min-height: 30px;\n"
"    border: 2px solid #F5F5F5;            /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \320\264\320\273\321\217 \320\272\320\276\320\275\321\202\321\200\320\260\321\201\321\202\320\260 */\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover {\n"
"    background: #78909C;                   /* \320\242\320\265\320\274\320\275\320\265\320\265 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical, \n"
"QScrollBar::sub-line:vertical {\n"
"    height: 0px;\n"
"    background: none;\n"
"}\n"
"\n"
"/* \320\255\321\204\321\204\320\265\320\272\321\202 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"QListView::item:pressed {\n"
"    background-color:"
                        " #0288D1;\n"
"    color: white;\n"
"    transform: translateY(1px);\n"
"}"));
        label_2 = new QLabel(frame_bot);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 0, 191, 31));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(false);
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: rgba(0, 0, 0, 0);\n"
"    border: none;\n"
"color: #006400; /* \321\215\321\202\320\276 \320\275\320\260\321\201\321\213\321\211\320\265\320\275\320\275\321\213\320\271 \321\202\320\265\320\274\320\275\320\276-\320\267\320\265\320\273\321\221\320\275\321\213\320\271 */\n"
"}"));
        pushButton_addnote = new QPushButton(centralwidget);
        pushButton_addnote->setObjectName("pushButton_addnote");
        pushButton_addnote->setGeometry(QRect(390, 1000, 60, 60));
        QFont font3;
        font3.setBold(true);
        font3.setItalic(false);
        pushButton_addnote->setFont(font3);
        pushButton_addnote->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50;          /* \320\236\321\201\320\275\320\276\320\262\320\275\320\276\320\271 \320\267\320\265\320\273\320\265\320\275\321\213\320\271 */\n"
"    border: 2px solid #388E3C;         /* \320\242\320\265\320\274\320\275\320\276-\320\267\320\265\320\273\320\265\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 8px;                /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"    color: white;\n"
"    font-size: 24px;                   /* \320\243\320\262\320\265\320\273\320\270\321\207\320\270\320\262\320\260\320\265\320\274 \321\200\320\260\320\267\320\274\320\265\321\200 \"+\" */\n"
"    font-weight: bold;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"    padding: 0px;\n"
"    margin: 2px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #66BB6A;          /* \320\241\320\262\320\265\321\202\320\273"
                        "\320\276-\320\267\320\265\320\273\320\265\320\275\321\213\320\271 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"    border-color: #4CAF50;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #2E7D32;         /* \320\242\320\265\320\274\320\275\320\276-\320\267\320\265\320\273\320\265\320\275\321\213\320\271 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    border-color: #1B5E20;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("icons/icons8-plus-144 (1).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_addnote->setIcon(icon);
        pushButton_addnote->setIconSize(QSize(60, 60));
        pushButton_checkStatistic = new QPushButton(centralwidget);
        pushButton_checkStatistic->setObjectName("pushButton_checkStatistic");
        pushButton_checkStatistic->setGeometry(QRect(460, 1000, 60, 60));
        pushButton_checkStatistic->setFont(font3);
        pushButton_checkStatistic->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #4CAF50;          /* \320\236\321\201\320\275\320\276\320\262\320\275\320\276\320\271 \320\267\320\265\320\273\320\265\320\275\321\213\320\271 */\n"
"    border: 2px solid #388E3C;         /* \320\242\320\265\320\274\320\275\320\276-\320\267\320\265\320\273\320\265\320\275\320\260\321\217 \320\263\321\200\320\260\320\275\320\270\321\206\320\260 */\n"
"    border-radius: 8px;                /* \320\227\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\320\265 \321\203\320\263\320\273\320\276\320\262 */\n"
"    color: white;\n"
"    font-size: 24px;                   /* \320\243\320\262\320\265\320\273\320\270\321\207\320\270\320\262\320\260\320\265\320\274 \321\200\320\260\320\267\320\274\320\265\321\200 \"+\" */\n"
"    font-weight: bold;\n"
"    min-width: 40px;\n"
"    min-height: 40px;\n"
"    padding: 0px;\n"
"    margin: 2px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #66BB6A;          /* \320\241\320\262\320\265\321\202\320\273"
                        "\320\276-\320\267\320\265\320\273\320\265\320\275\321\213\320\271 \320\277\321\200\320\270 \320\275\320\260\320\262\320\265\320\264\320\265\320\275\320\270\320\270 */\n"
"    border-color: #4CAF50;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #2E7D32;         /* \320\242\320\265\320\274\320\275\320\276-\320\267\320\265\320\273\320\265\320\275\321\213\320\271 \320\277\321\200\320\270 \320\275\320\260\320\266\320\260\321\202\320\270\320\270 */\n"
"    border-color: #1B5E20;\n"
"}"));
        pushButton_checkStatistic->setIconSize(QSize(60, 60));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\232\320\260\320\273\320\265\320\275\320\264\320\260\321\200\321\214 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\276\320\272", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\241\320\277\320\270\321\201\320\276\320\272 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\276\320\272", nullptr));
        pushButton_addnote->setText(QString());
        pushButton_checkStatistic->setText(QCoreApplication::translate("MainWindow", "!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
