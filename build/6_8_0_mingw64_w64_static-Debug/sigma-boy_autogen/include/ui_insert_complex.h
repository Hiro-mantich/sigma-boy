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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_insert_complex
{
public:
    QFrame *frame;
    QGroupBox *groupBox;
    QPushButton *pushButton_add;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEdit_title;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_group_muscle;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_work_weight;
    QLabel *label_3;
    QLineEdit *lineEdit_numb_try;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_numb_repit;

    void setupUi(QDialog *insert_complex)
    {
        if (insert_complex->objectName().isEmpty())
            insert_complex->setObjectName("insert_complex");
        insert_complex->resize(450, 550);
        frame = new QFrame(insert_complex);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 450, 550));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 65, 66);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 430, 530));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(91, 92, 93);"));
        pushButton_add = new QPushButton(groupBox);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setGeometry(QRect(100, 450, 226, 60));
        QFont font;
        font.setBold(true);
        pushButton_add->setFont(font);
        pushButton_add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        layoutWidget->setGeometry(QRect(70, 40, 311, 403));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 206, 206);\n"
"border-radius: 8px;"));

        verticalLayout->addWidget(label);

        lineEdit_title = new QLineEdit(layoutWidget);
        lineEdit_title->setObjectName("lineEdit_title");
        QFont font2;
        font2.setPointSize(15);
        lineEdit_title->setFont(font2);
        lineEdit_title->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;"));

        verticalLayout->addWidget(lineEdit_title);


        verticalLayout_5->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 206, 206);\n"
"border-radius: 8px;"));

        verticalLayout_2->addWidget(label_2);

        lineEdit_group_muscle = new QLineEdit(layoutWidget);
        lineEdit_group_muscle->setObjectName("lineEdit_group_muscle");
        lineEdit_group_muscle->setFont(font2);
        lineEdit_group_muscle->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;"));

        verticalLayout_2->addWidget(lineEdit_group_muscle);


        verticalLayout_5->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 206, 206);\n"
"border-radius: 8px;"));

        verticalLayout_3->addWidget(label_5);

        lineEdit_work_weight = new QLineEdit(layoutWidget);
        lineEdit_work_weight->setObjectName("lineEdit_work_weight");
        lineEdit_work_weight->setFont(font2);
        lineEdit_work_weight->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;"));

        verticalLayout_3->addWidget(lineEdit_work_weight);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 206, 206);\n"
"border-radius: 8px;"));

        verticalLayout_3->addWidget(label_3);

        lineEdit_numb_try = new QLineEdit(layoutWidget);
        lineEdit_numb_try->setObjectName("lineEdit_numb_try");
        lineEdit_numb_try->setFont(font2);
        lineEdit_numb_try->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;"));

        verticalLayout_3->addWidget(lineEdit_numb_try);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(206, 206, 206);\n"
"border-radius: 8px;"));

        verticalLayout_4->addWidget(label_4);

        lineEdit_numb_repit = new QLineEdit(layoutWidget);
        lineEdit_numb_repit->setObjectName("lineEdit_numb_repit");
        lineEdit_numb_repit->setFont(font2);
        lineEdit_numb_repit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 8px;"));

        verticalLayout_4->addWidget(lineEdit_numb_repit);


        verticalLayout_5->addLayout(verticalLayout_4);


        retranslateUi(insert_complex);

        QMetaObject::connectSlotsByName(insert_complex);
    } // setupUi

    void retranslateUi(QDialog *insert_complex)
    {
        insert_complex->setWindowTitle(QCoreApplication::translate("insert_complex", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("insert_complex", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265 \321\203\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\321\217", nullptr));
        pushButton_add->setText(QCoreApplication::translate("insert_complex", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("insert_complex", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\203\320\277\321\200\320\260\320\266\320\275\320\265\320\275\320\270\321\217", nullptr));
        label_2->setText(QCoreApplication::translate("insert_complex", "\320\223\321\200\321\203\320\277\320\277\320\260 \320\274\321\213\321\210\321\206", nullptr));
        label_5->setText(QCoreApplication::translate("insert_complex", "\320\240\320\260\320\261\320\276\321\207\320\270\320\271 \320\262\320\265\321\201", nullptr));
        label_3->setText(QCoreApplication::translate("insert_complex", "\320\232\320\276\320\273-\320\262\320\276 \320\277\320\276\320\264\321\205\320\276\320\264\320\276\320\262", nullptr));
        label_4->setText(QCoreApplication::translate("insert_complex", "\320\232\320\276\320\273-\320\262\320\276 \320\277\320\276\320\262\321\202\320\276\321\200\320\276\320\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class insert_complex: public Ui_insert_complex {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSERT_COMPLEX_H
