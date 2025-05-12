/********************************************************************************
** Form generated from reading UI file 'statisticwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICWINDOW_H
#define UI_STATISTICWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StatisticWindow
{
public:
    QFrame *frame;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_7;
    QListView *listView_statistic;

    void setupUi(QWidget *StatisticWindow)
    {
        if (StatisticWindow->objectName().isEmpty())
            StatisticWindow->setObjectName("StatisticWindow");
        StatisticWindow->resize(450, 550);
        frame = new QFrame(StatisticWindow);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(0, 0, 450, 550));
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 0);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 271, 61));
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 100, 231, 51));
        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(330, 60, 63, 20));
        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(330, 170, 63, 20));
        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 150, 231, 51));
        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(330, 110, 63, 20));
        listView_statistic = new QListView(frame);
        listView_statistic->setObjectName("listView_statistic");
        listView_statistic->setGeometry(QRect(10, 220, 431, 321));
        listView_statistic->setStyleSheet(QString::fromUtf8("background-color: rgb(177, 177, 177);"));

        retranslateUi(StatisticWindow);

        QMetaObject::connectSlotsByName(StatisticWindow);
    } // setupUi

    void retranslateUi(QWidget *StatisticWindow)
    {
        StatisticWindow->setWindowTitle(QCoreApplication::translate("StatisticWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("StatisticWindow", "\320\242\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\276\320\272 \320\267\320\260  \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\270\320\265 2 \320\275\320\265\320\264\320\265\320\273\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("StatisticWindow", "\320\242\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\276\320\272 \320\267\320\260 \320\277\320\276\321\201\320\273\320\265\320\264\320\275\320\270\320\271 \320\263\320\276\320\264", nullptr));
        label_3->setText(QCoreApplication::translate("StatisticWindow", "?", nullptr));
        label_4->setText(QCoreApplication::translate("StatisticWindow", "?", nullptr));
        label_5->setText(QCoreApplication::translate("StatisticWindow", "\320\242\321\200\320\265\320\275\320\270\321\200\320\276\320\262\320\276\320\272 \320\267\320\260 \320\262\321\201\320\265 \320\262\321\200\320\265\320\274\321\217", nullptr));
        label_7->setText(QCoreApplication::translate("StatisticWindow", "\320\245\320\276\321\200\320\276\321\210\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StatisticWindow: public Ui_StatisticWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICWINDOW_H
