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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_add_workout
{
public:
    QFrame *frame;
    QLabel *label;
    QLineEdit *lineEdit;
    QComboBox *comboBox_Exercises;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_Description;
    QDateEdit *dateEdit;
    QPushButton *pushButton;

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
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(40, 230, 141, 26));
        QFont font1;
        font1.setPointSize(12);
        lineEdit->setFont(font1);
        comboBox_Exercises = new QComboBox(frame);
        comboBox_Exercises->addItem(QString());
        comboBox_Exercises->addItem(QString());
        comboBox_Exercises->addItem(QString());
        comboBox_Exercises->setObjectName("comboBox_Exercises");
        comboBox_Exercises->setGeometry(QRect(40, 260, 441, 41));
        comboBox_Exercises->setFont(font1);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 100, 63, 20));
        label_2->setFont(font1);
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 150, 81, 20));
        label_3->setFont(font1);
        lineEdit_Description = new QLineEdit(frame);
        lineEdit_Description->setObjectName("lineEdit_Description");
        lineEdit_Description->setGeometry(QRect(140, 140, 113, 26));
        lineEdit_Description->setFont(font1);
        dateEdit = new QDateEdit(frame);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setGeometry(QRect(140, 90, 121, 26));
        dateEdit->setFont(font1);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(120, 370, 261, 51));

        retranslateUi(add_workout);

        QMetaObject::connectSlotsByName(add_workout);
    } // setupUi

    void retranslateUi(QDialog *add_workout)
    {
        add_workout->setWindowTitle(QCoreApplication::translate("add_workout", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("add_workout", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265 \320\267\320\260\320\277\320\270\321\201\320\270 \320\276 \320\275\320\276\320\262\320\276\320\271 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\320\265", nullptr));
        lineEdit->setText(QCoreApplication::translate("add_workout", "\320\223\321\200\321\203\320\277\320\277\320\260 \320\274\321\213\321\210\321\206", nullptr));
        comboBox_Exercises->setItemText(0, QCoreApplication::translate("add_workout", "\320\235\320\276\320\263\320\270 ", nullptr));
        comboBox_Exercises->setItemText(1, QCoreApplication::translate("add_workout", "\320\241\320\277\320\270\320\275\320\260", nullptr));
        comboBox_Exercises->setItemText(2, QCoreApplication::translate("add_workout", "\320\240\321\203\320\272\320\270", nullptr));

        comboBox_Exercises->setCurrentText(QCoreApplication::translate("add_workout", "\320\235\320\276\320\263\320\270 ", nullptr));
        label_2->setText(QCoreApplication::translate("add_workout", "\320\224\320\260\321\202\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("add_workout", "\320\227\320\260\320\274\320\265\321\202\320\272\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("add_workout", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\202\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\272\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_workout: public Ui_add_workout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_WORKOUT_H
