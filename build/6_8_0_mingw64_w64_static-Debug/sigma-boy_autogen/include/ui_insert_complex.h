/********************************************************************************
** Form generated from reading UI file 'insert_complex.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSERT_COMPLEX_H
#define UI_INSERT_COMPLEX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_insert_complex
{
public:
    QFrame *frame;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *lineEdit_title;
    QLabel *label_2;
    QLineEdit *lineEdit_group_muscle;
    QLabel *label_4;
    QLineEdit *lineEdit_numb_try;
    QLineEdit *lineEdit_numb_repit;
    QLabel *label_3;
    QPushButton *pushButton_add;

    void setupUi(QDialog *insert_complex)
    {
        if (insert_complex->objectName().isEmpty())
            insert_complex->setObjectName("insert_complex");
        insert_complex->resize(450, 450);
        frame = new QFrame(insert_complex);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 450, 450));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 65, 66);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 430, 430));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(91, 92, 93);"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 70, 121, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 206, 206);"));
        lineEdit_title = new QLineEdit(groupBox);
        lineEdit_title->setObjectName("lineEdit_title");
        lineEdit_title->setGeometry(QRect(170, 70, 221, 41));
        lineEdit_title->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 120, 151, 41));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 206, 206);"));
        lineEdit_group_muscle = new QLineEdit(groupBox);
        lineEdit_group_muscle->setObjectName("lineEdit_group_muscle");
        lineEdit_group_muscle->setGeometry(QRect(190, 120, 191, 41));
        lineEdit_group_muscle->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 240, 181, 41));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 206, 206);"));
        lineEdit_numb_try = new QLineEdit(groupBox);
        lineEdit_numb_try->setObjectName("lineEdit_numb_try");
        lineEdit_numb_try->setGeometry(QRect(220, 180, 161, 41));
        lineEdit_numb_try->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_numb_repit = new QLineEdit(groupBox);
        lineEdit_numb_repit->setObjectName("lineEdit_numb_repit");
        lineEdit_numb_repit->setGeometry(QRect(220, 240, 161, 41));
        lineEdit_numb_repit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 180, 181, 41));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 206, 206);"));
        pushButton_add = new QPushButton(groupBox);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(100, 330, 221, 61));
        QFont font1;
        pushButton_add->setFont(font1);
        pushButton_add->setStyleSheet(QString::fromUtf8("QPushButton {background-color: #4CAF50;\n"
"border: none;   \n"
"color: white;           \n"
"padding: 10px 20px;        \n"
"border-radius: 10px;        \n"
"font-size: 16px;\n"
"}      \n"
"QPushButton:hover {\n"
"background-color: #45a049;\n"
"}\n"
"QPushButton:pressed {\n"
"background-color: #3d8b40;  \n"
"}"));

        retranslateUi(insert_complex);

        QMetaObject::connectSlotsByName(insert_complex);
    } // setupUi

    void retranslateUi(QDialog *insert_complex)
    {
        insert_complex->setWindowTitle(QCoreApplication::translate("insert_complex", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("insert_complex", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \321\203\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\321\217", nullptr));
        label->setText(QCoreApplication::translate("insert_complex", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("insert_complex", "\320\223\321\200\321\203\320\277\320\277\320\260 \320\274\321\213\321\210\321\206", nullptr));
        label_4->setText(QCoreApplication::translate("insert_complex", "\320\232\320\276\320\273-\320\262\320\276 \320\277\320\276\320\262\321\202\320\276\321\200\320\276\320\262", nullptr));
        label_3->setText(QCoreApplication::translate("insert_complex", "\320\232\320\276\320\273-\320\262\320\276 \320\277\320\276\320\264\321\205\320\276\320\264\320\276\320\262", nullptr));
        pushButton_add->setText(QCoreApplication::translate("insert_complex", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class insert_complex: public Ui_insert_complex {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERT_COMPLEX_H
