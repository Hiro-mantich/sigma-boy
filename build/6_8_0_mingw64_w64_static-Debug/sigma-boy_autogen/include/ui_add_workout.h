/********************************************************************************
** Form generated from reading UI file 'add_workout.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_WORKOUT_H
#define UI_ADD_WORKOUT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_workout
{
public:
    QFrame *frame;
    QGroupBox *groupBox;
    QListView *listView_exercises;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QComboBox *comboBox_Description;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *add_workout)
    {
        if (add_workout->objectName().isEmpty())
            add_workout->setObjectName("add_workout");
        add_workout->resize(550, 550);
        frame = new QFrame(add_workout);
        frame->setObjectName("frame");
        frame->setEnabled(true);
        frame->setGeometry(QRect(0, 0, 550, 550));
        frame->setAutoFillBackground(false);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 65, 66);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 530, 530));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(91, 92, 93);"));
        listView_exercises = new QListView(groupBox);
        listView_exercises->setObjectName("listView_exercises");
        listView_exercises->setGeometry(QRect(20, 250, 491, 191));
        listView_exercises->setStyleSheet(QString::fromUtf8("QListView {\n"
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
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(445, 375, 55, 55));
        QFont font;
        font.setBold(true);
        font.setStyleStrategy(QFont::PreferDefault);
        pushButton_2->setFont(font);
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        icon.addFile(QString::fromUtf8("icons/icons8-strength-100.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setIconSize(QSize(45, 45));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(125, 455, 300, 61));
        pushButton->setTabletTracking(false);
        pushButton->setFocusPolicy(Qt::FocusPolicy::StrongFocus);
        pushButton->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        pushButton->setAcceptDrops(false);
        pushButton->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 40, 491, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Segoe UI")});
        font1.setWeight(QFont::Medium);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("    background-color: #dbdbdb;              \n"
"    border: 1px solid #CFD8DC;              /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \321\206\320\262\320\265\321\202\320\260 \"\321\201\320\265\321\200\320\265\320\261\321\200\320\270\321\201\321\202\321\213\320\271 \321\202\321\203\320\274\320\260\320\275\" */\n"
"    border-radius: 8px;                     /* \320\221\320\276\320\273\320\265\320\265 \320\277\320\273\320\260\320\262\320\275\321\213\320\265 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 6px;\n"
"    font-family: 'Segoe UI', system-ui;      /* \320\221\320\276\320\273\320\265\320\265 \321\201\320\276\320\262\321\200\320\265\320\274\320\265\320\275\320\275\321\213\320\271 \321\201\321\202\320\265\320\272 \321\210\321\200\320\270\321\204\321\202\320\276\320\262 */\n"
"    font-size: 20px;                        /* \320\243\320\262\320\265\320\273\320\270\321\207\320\265\320\275\320\275\321\213\320\271 \321\200\320\260"
                        "\320\267\320\274\320\265\321\200 */\n"
"    font-weight: 500;                       /* \320\237\320\276\320\273\321\203\320\266\320\270\321\200\320\275\321\213\320\271 \320\264\320\273\321\217 \320\273\321\203\321\207\321\210\320\265\320\271 \321\207\320\270\321\202\320\260\320\265\320\274\320\276\321\201\321\202\320\270 */\n"
"    color: #263238;                         /* \320\223\320\273\321\203\320\261\320\276\320\272\320\270\320\271 \321\201\320\270\320\275\320\265-\321\201\320\265\321\200\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    outline: none;\n"
"    alternate-background-color: #F8F9FA;     /* \320\236\321\207\320\265\320\275\321\214 \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \321\201\320\265\321\200\321\213\320\271 \320\264\320\273\321\217 \321\207\320\265\321\200\320\265\320\264\320\276\320\262\320\260\320\275\320\270\321\217 */"));

        horizontalLayout->addWidget(label_2);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName("dateEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(13);
        dateEdit->setFont(font2);
        dateEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;"));
        dateEdit->setCalendarPopup(true);

        horizontalLayout->addWidget(dateEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("    background-color: #dbdbdb;              \n"
"    border: 1px solid #CFD8DC;              /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \321\206\320\262\320\265\321\202\320\260 \"\321\201\320\265\321\200\320\265\320\261\321\200\320\270\321\201\321\202\321\213\320\271 \321\202\321\203\320\274\320\260\320\275\" */\n"
"    border-radius: 8px;                     /* \320\221\320\276\320\273\320\265\320\265 \320\277\320\273\320\260\320\262\320\275\321\213\320\265 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 6px;\n"
"    font-family: 'Segoe UI', system-ui;      /* \320\221\320\276\320\273\320\265\320\265 \321\201\320\276\320\262\321\200\320\265\320\274\320\265\320\275\320\275\321\213\320\271 \321\201\321\202\320\265\320\272 \321\210\321\200\320\270\321\204\321\202\320\276\320\262 */\n"
"    font-size: 20px;                        /* \320\243\320\262\320\265\320\273\320\270\321\207\320\265\320\275\320\275\321\213\320\271 \321\200\320\260"
                        "\320\267\320\274\320\265\321\200 */\n"
"    font-weight: 500;                       /* \320\237\320\276\320\273\321\203\320\266\320\270\321\200\320\275\321\213\320\271 \320\264\320\273\321\217 \320\273\321\203\321\207\321\210\320\265\320\271 \321\207\320\270\321\202\320\260\320\265\320\274\320\276\321\201\321\202\320\270 */\n"
"    color: #263238;                         /* \320\223\320\273\321\203\320\261\320\276\320\272\320\270\320\271 \321\201\320\270\320\275\320\265-\321\201\320\265\321\200\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    outline: none;\n"
"    alternate-background-color: #F8F9FA;     /* \320\236\321\207\320\265\320\275\321\214 \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \321\201\320\265\321\200\321\213\320\271 \320\264\320\273\321\217 \321\207\320\265\321\200\320\265\320\264\320\276\320\262\320\260\320\275\320\270\321\217 */"));

        horizontalLayout_2->addWidget(lineEdit);

        comboBox_Description = new QComboBox(layoutWidget);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("icons/icons8-green-circle-96.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        comboBox_Description->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("icons/icons8-blue-circle-96.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        comboBox_Description->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("icons/icons8-yellow-circle-96.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        comboBox_Description->addItem(icon3, QString());
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("icons/icons8-run-100.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        comboBox_Description->addItem(icon4, QString());
        comboBox_Description->setObjectName("comboBox_Description");
        sizePolicy1.setHeightForWidth(comboBox_Description->sizePolicy().hasHeightForWidth());
        comboBox_Description->setSizePolicy(sizePolicy1);
        comboBox_Description->setFont(font2);
        comboBox_Description->setTabletTracking(false);
        comboBox_Description->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;"));

        horizontalLayout_2->addWidget(comboBox_Description);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("    background-color: #dbdbdb;              \n"
"    border: 1px solid #CFD8DC;              /* \320\223\321\200\320\260\320\275\320\270\321\206\320\260 \321\206\320\262\320\265\321\202\320\260 \"\321\201\320\265\321\200\320\265\320\261\321\200\320\270\321\201\321\202\321\213\320\271 \321\202\321\203\320\274\320\260\320\275\" */\n"
"    border-radius: 8px;                     /* \320\221\320\276\320\273\320\265\320\265 \320\277\320\273\320\260\320\262\320\275\321\213\320\265 \320\267\320\260\320\272\321\200\321\203\320\263\320\273\320\265\320\275\320\270\321\217 */\n"
"    padding: 6px;\n"
"    font-family: 'Segoe UI', system-ui;      /* \320\221\320\276\320\273\320\265\320\265 \321\201\320\276\320\262\321\200\320\265\320\274\320\265\320\275\320\275\321\213\320\271 \321\201\321\202\320\265\320\272 \321\210\321\200\320\270\321\204\321\202\320\276\320\262 */\n"
"    font-size: 20px;                        /* \320\243\320\262\320\265\320\273\320\270\321\207\320\265\320\275\320\275\321\213\320\271 \321\200\320\260"
                        "\320\267\320\274\320\265\321\200 */\n"
"    font-weight: 500;                       /* \320\237\320\276\320\273\321\203\320\266\320\270\321\200\320\275\321\213\320\271 \320\264\320\273\321\217 \320\273\321\203\321\207\321\210\320\265\320\271 \321\207\320\270\321\202\320\260\320\265\320\274\320\276\321\201\321\202\320\270 */\n"
"    color: #263238;                         /* \320\223\320\273\321\203\320\261\320\276\320\272\320\270\320\271 \321\201\320\270\320\275\320\265-\321\201\320\265\321\200\321\213\320\271 \321\206\320\262\320\265\321\202 \321\202\320\265\320\272\321\201\321\202\320\260 */\n"
"    outline: none;\n"
"    alternate-background-color: #F8F9FA;     /* \320\236\321\207\320\265\320\275\321\214 \321\201\320\262\320\265\321\202\320\273\321\213\320\271 \321\201\320\265\321\200\321\213\320\271 \320\264\320\273\321\217 \321\207\320\265\321\200\320\265\320\264\320\276\320\262\320\260\320\275\320\270\321\217 */"));

        horizontalLayout_3->addWidget(label_3);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy2);
        lineEdit_2->setFont(font2);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;"));

        horizontalLayout_3->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(add_workout);

        QMetaObject::connectSlotsByName(add_workout);
    } // setupUi

    void retranslateUi(QDialog *add_workout)
    {
        add_workout->setWindowTitle(QCoreApplication::translate("add_workout", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("add_workout", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \320\267\320\260\320\277\320\270\321\201\320\270 \320\276 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\265", nullptr));
        pushButton_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("add_workout", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\321\203", nullptr));
        label_2->setText(QCoreApplication::translate("add_workout", "\320\224\320\260\321\202\320\260", nullptr));
        lineEdit->setText(QCoreApplication::translate("add_workout", "\320\236\321\201\320\275\320\276\320\262\320\275\320\260\321\217 \320\263\321\200\321\203\320\277\320\277\320\260 \320\274\321\213\321\210\321\206", nullptr));
        comboBox_Description->setItemText(0, QCoreApplication::translate("add_workout", "\320\241\320\277\320\270\320\275\320\260", nullptr));
        comboBox_Description->setItemText(1, QCoreApplication::translate("add_workout", "\320\223\321\200\321\203\320\264\321\214", nullptr));
        comboBox_Description->setItemText(2, QCoreApplication::translate("add_workout", "\320\235\320\276\320\263\320\270", nullptr));
        comboBox_Description->setItemText(3, QCoreApplication::translate("add_workout", "\320\232\320\260\321\200\320\264\320\270\320\276", nullptr));

        label_3->setText(QCoreApplication::translate("add_workout", "\320\227\320\260\320\274\320\265\321\202\320\272\320\260", nullptr));
        lineEdit_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class add_workout: public Ui_add_workout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_WORKOUT_H
