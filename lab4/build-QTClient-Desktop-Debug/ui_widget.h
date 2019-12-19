/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *portLineEdit;
    QLineEdit *ipLineEdit;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QPushButton *connectButton;
    QListWidget *listWidget;
    QLineEdit *nicname;
    QLabel *label_5;
    QLineEdit *messageLineEdit;
    QPushButton *sendButton;
    QLineEdit *ipFileSendEdit;
    QPushButton *fileSendButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(688, 505);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 391, 381));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 10);
        portLineEdit = new QLineEdit(gridLayoutWidget);
        portLineEdit->setObjectName(QStringLiteral("portLineEdit"));
        portLineEdit->setMinimumSize(QSize(200, 0));

        gridLayout->addWidget(portLineEdit, 1, 2, 1, 1);

        ipLineEdit = new QLineEdit(gridLayoutWidget);
        ipLineEdit->setObjectName(QStringLiteral("ipLineEdit"));
        ipLineEdit->setMinimumSize(QSize(200, 0));
        ipLineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(ipLineEdit, 0, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 7, 0, 1, 1);

        connectButton = new QPushButton(gridLayoutWidget);
        connectButton->setObjectName(QStringLiteral("connectButton"));
        connectButton->setEnabled(true);
        connectButton->setAutoFillBackground(false);
        connectButton->setIconSize(QSize(16, 16));

        gridLayout->addWidget(connectButton, 0, 3, 3, 1);

        listWidget = new QListWidget(gridLayoutWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setAutoScroll(false);
        listWidget->setAutoScrollMargin(3);
        listWidget->setDefaultDropAction(Qt::IgnoreAction);
        listWidget->setMovement(QListView::Static);

        gridLayout->addWidget(listWidget, 6, 0, 1, 4);

        nicname = new QLineEdit(gridLayoutWidget);
        nicname->setObjectName(QStringLiteral("nicname"));

        gridLayout->addWidget(nicname, 2, 2, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 9, 0, 1, 1);

        messageLineEdit = new QLineEdit(gridLayoutWidget);
        messageLineEdit->setObjectName(QStringLiteral("messageLineEdit"));

        gridLayout->addWidget(messageLineEdit, 7, 2, 1, 1);

        sendButton = new QPushButton(gridLayoutWidget);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setCursor(QCursor(Qt::ArrowCursor));
        sendButton->setIconSize(QSize(16, 16));

        gridLayout->addWidget(sendButton, 7, 3, 1, 1);

        ipFileSendEdit = new QLineEdit(gridLayoutWidget);
        ipFileSendEdit->setObjectName(QStringLiteral("ipFileSendEdit"));

        gridLayout->addWidget(ipFileSendEdit, 9, 2, 1, 1);

        fileSendButton = new QPushButton(gridLayoutWidget);
        fileSendButton->setObjectName(QStringLiteral("fileSendButton"));

        gridLayout->addWidget(fileSendButton, 9, 3, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        label->setText(QApplication::translate("Widget", "IP \354\243\274\354\206\214:", 0));
        label_3->setText(QApplication::translate("Widget", "\355\217\254\355\212\270:", 0));
        label_4->setText(QApplication::translate("Widget", "\353\213\211\353\204\244\354\236\204:", 0));
        label_2->setText(QApplication::translate("Widget", "\353\251\224\354\204\270\354\247\200:", 0));
#ifndef QT_NO_ACCESSIBILITY
        connectButton->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        connectButton->setText(QApplication::translate("Widget", "\354\240\221\354\206\215", 0));
        label_5->setText(QApplication::translate("Widget", "\355\214\214\354\235\274\354\240\204\354\206\241 IP:", 0));
        sendButton->setText(QApplication::translate("Widget", "\354\240\204\354\206\241", 0));
        fileSendButton->setText(QApplication::translate("Widget", "\355\214\214\354\235\274\354\240\204\354\206\241", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
