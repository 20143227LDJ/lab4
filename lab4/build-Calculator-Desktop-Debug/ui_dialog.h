/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_multi;
    QPushButton *pushButton_clean;
    QPushButton *pushButton_5;
    QPushButton *pushButton_9;
    QPushButton *pushButton_4;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_3;
    QPushButton *pushButton_8;
    QPushButton *pushButton_0;
    QPushButton *pushButton_add;
    QPushButton *pushButton_7;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_result;
    QPushButton *pushButton_div;
    QPushButton *pushButton_close;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_first;
    QLineEdit *lineEdit_op;
    QLineEdit *lineEdit_second;
    QLabel *label_1;
    QLineEdit *lineEdit_result;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(571, 406);
        gridLayoutWidget = new QWidget(Dialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 210, 511, 171));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_multi = new QPushButton(gridLayoutWidget);
        pushButton_multi->setObjectName(QStringLiteral("pushButton_multi"));

        gridLayout->addWidget(pushButton_multi, 2, 3, 1, 1);

        pushButton_clean = new QPushButton(gridLayoutWidget);
        pushButton_clean->setObjectName(QStringLiteral("pushButton_clean"));

        gridLayout->addWidget(pushButton_clean, 3, 0, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 1, 1, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 2, 2, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_1 = new QPushButton(gridLayoutWidget);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setEnabled(true);
        pushButton_1->setAutoRepeatDelay(300);

        gridLayout->addWidget(pushButton_1, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 0, 1, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 2, 1, 1, 1);

        pushButton_0 = new QPushButton(gridLayoutWidget);
        pushButton_0->setObjectName(QStringLiteral("pushButton_0"));

        gridLayout->addWidget(pushButton_0, 3, 1, 1, 1);

        pushButton_add = new QPushButton(gridLayoutWidget);
        pushButton_add->setObjectName(QStringLiteral("pushButton_add"));

        gridLayout->addWidget(pushButton_add, 0, 3, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 2, 0, 1, 1);

        pushButton_minus = new QPushButton(gridLayoutWidget);
        pushButton_minus->setObjectName(QStringLiteral("pushButton_minus"));

        gridLayout->addWidget(pushButton_minus, 1, 3, 1, 1);

        pushButton_result = new QPushButton(gridLayoutWidget);
        pushButton_result->setObjectName(QStringLiteral("pushButton_result"));

        gridLayout->addWidget(pushButton_result, 3, 2, 1, 1);

        pushButton_div = new QPushButton(gridLayoutWidget);
        pushButton_div->setObjectName(QStringLiteral("pushButton_div"));

        gridLayout->addWidget(pushButton_div, 3, 3, 1, 1);

        pushButton_close = new QPushButton(gridLayoutWidget);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));

        gridLayout->addWidget(pushButton_close, 3, 4, 1, 1);

        horizontalLayoutWidget = new QWidget(Dialog);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 40, 511, 121));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_first = new QLineEdit(horizontalLayoutWidget);
        lineEdit_first->setObjectName(QStringLiteral("lineEdit_first"));

        horizontalLayout->addWidget(lineEdit_first);

        lineEdit_op = new QLineEdit(horizontalLayoutWidget);
        lineEdit_op->setObjectName(QStringLiteral("lineEdit_op"));

        horizontalLayout->addWidget(lineEdit_op);

        lineEdit_second = new QLineEdit(horizontalLayoutWidget);
        lineEdit_second->setObjectName(QStringLiteral("lineEdit_second"));

        horizontalLayout->addWidget(lineEdit_second);

        label_1 = new QLabel(horizontalLayoutWidget);
        label_1->setObjectName(QStringLiteral("label_1"));

        horizontalLayout->addWidget(label_1);

        lineEdit_result = new QLineEdit(horizontalLayoutWidget);
        lineEdit_result->setObjectName(QStringLiteral("lineEdit_result"));

        horizontalLayout->addWidget(lineEdit_result);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Calculator", 0));
        pushButton_multi->setText(QApplication::translate("Dialog", "*", 0));
        pushButton_clean->setText(QApplication::translate("Dialog", "C", 0));
        pushButton_5->setText(QApplication::translate("Dialog", "5", 0));
        pushButton_9->setText(QApplication::translate("Dialog", "9", 0));
        pushButton_4->setText(QApplication::translate("Dialog", "4", 0));
        pushButton_1->setText(QApplication::translate("Dialog", "1", 0));
        pushButton_2->setText(QApplication::translate("Dialog", "2", 0));
        pushButton_6->setText(QApplication::translate("Dialog", "6", 0));
        pushButton_3->setText(QApplication::translate("Dialog", "3", 0));
        pushButton_8->setText(QApplication::translate("Dialog", "8", 0));
        pushButton_0->setText(QApplication::translate("Dialog", "0", 0));
        pushButton_add->setText(QApplication::translate("Dialog", "+", 0));
        pushButton_7->setText(QApplication::translate("Dialog", "7", 0));
        pushButton_minus->setText(QApplication::translate("Dialog", "-", 0));
        pushButton_result->setText(QApplication::translate("Dialog", "=", 0));
        pushButton_div->setText(QApplication::translate("Dialog", "/", 0));
        pushButton_close->setText(QApplication::translate("Dialog", "CLS", 0));
        label_1->setText(QApplication::translate("Dialog", "=", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
