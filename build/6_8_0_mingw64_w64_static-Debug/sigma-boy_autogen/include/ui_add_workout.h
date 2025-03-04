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
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_workout
{
public:
    QFrame *frame;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QListView *listView_exercises;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_Description;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDateEdit *dateEdit;

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
        frame->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(169, 169, 169);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 550, 100));
        QFont font;
        font.setPointSize(16);
        font.setBold(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(169, 169, 169);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(60, 190, 201, 26));
        QFont font1;
        font1.setPointSize(12);
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(150, 460, 261, 51));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(470, 380, 31, 51));
        QFont font2;
        font2.setPointSize(30);
        font2.setStyleStrategy(QFont::PreferDefault);
        pushButton_2->setFont(font2);
        pushButton_2->setIconSize(QSize(20, 20));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(300, 190, 113, 26));
        listView_exercises = new QListView(frame);
        listView_exercises->setObjectName("listView_exercises");
        listView_exercises->setGeometry(QRect(60, 240, 371, 191));
        widget = new QWidget(frame);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 140, 266, 35));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        lineEdit_Description = new QLineEdit(widget);
        lineEdit_Description->setObjectName("lineEdit_Description");
        lineEdit_Description->setFont(font1);
        lineEdit_Description->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(lineEdit_Description);

        widget1 = new QWidget(frame);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(40, 90, 176, 31));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget1);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        dateEdit = new QDateEdit(widget1);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setFont(font1);
        dateEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(dateEdit);


        retranslateUi(add_workout);

        QMetaObject::connectSlotsByName(add_workout);
    } // setupUi

    void retranslateUi(QDialog *add_workout)
    {
        add_workout->setWindowTitle(QCoreApplication::translate("add_workout", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("add_workout", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \320\267\320\260\320\277\320\270\321\201\320\270 \320\276 \320\275\320\276\320\262\320\276\320\271 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\265", nullptr));
        lineEdit->setText(QCoreApplication::translate("add_workout", "\320\235\320\260\320\261\320\276\321\200 \321\203\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\320\271", nullptr));
        pushButton->setText(QCoreApplication::translate("add_workout", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\321\203", nullptr));
        pushButton_2->setText(QCoreApplication::translate("add_workout", "+", nullptr));
        lineEdit_2->setText(QString());
        label_3->setText(QCoreApplication::translate("add_workout", "\320\227\320\260\320\274\320\265\321\202\320\272\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("add_workout", "\320\224\320\260\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_workout: public Ui_add_workout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_WORKOUT_H
