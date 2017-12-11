/********************************************************************************
** Form generated from reading UI file 'modewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODEWIDGET_H
#define UI_MODEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModeWidget
{
public:
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *pageMode;
    QPushButton *pushButtonMachine;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButtonNetwork;
    QWidget *pageMachine;
    QPushButton *pushButtonBlack;
    QLabel *label_4;
    QPushButton *pushButtonWhite;
    QLabel *label_5;
    QWidget *pageNetwork;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *lineEditPort;
    QRadioButton *radioButtonBlack;
    QRadioButton *radioButtonWhite;
    QToolButton *toolButtonSure;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *lineEditIP;
    QPushButton *pushButtonClose;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonBack;

    void setupUi(QWidget *ModeWidget)
    {
        if (ModeWidget->objectName().isEmpty())
            ModeWidget->setObjectName(QStringLiteral("ModeWidget"));
        ModeWidget->resize(582, 282);
        gridLayout = new QGridLayout(ModeWidget);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(ModeWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        pageMode = new QWidget();
        pageMode->setObjectName(QStringLiteral("pageMode"));
        pushButtonMachine = new QPushButton(pageMode);
        pushButtonMachine->setObjectName(QStringLiteral("pushButtonMachine"));
        pushButtonMachine->setGeometry(QRect(130, 30, 101, 121));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/image/machine.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonMachine->setIcon(icon);
        pushButtonMachine->setIconSize(QSize(100, 100));
        pushButtonMachine->setFlat(true);
        label_2 = new QLabel(pageMode);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 170, 111, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font.setPointSize(18);
        label_2->setFont(font);
        label_3 = new QLabel(pageMode);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(340, 170, 111, 31));
        label_3->setFont(font);
        pushButtonNetwork = new QPushButton(pageMode);
        pushButtonNetwork->setObjectName(QStringLiteral("pushButtonNetwork"));
        pushButtonNetwork->setGeometry(QRect(340, 30, 101, 121));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/image/network.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonNetwork->setIcon(icon1);
        pushButtonNetwork->setIconSize(QSize(100, 100));
        pushButtonNetwork->setFlat(true);
        stackedWidget->addWidget(pageMode);
        pageMachine = new QWidget();
        pageMachine->setObjectName(QStringLiteral("pageMachine"));
        pushButtonBlack = new QPushButton(pageMachine);
        pushButtonBlack->setObjectName(QStringLiteral("pushButtonBlack"));
        pushButtonBlack->setGeometry(QRect(120, 60, 91, 81));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/image/black.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBlack->setIcon(icon2);
        pushButtonBlack->setIconSize(QSize(80, 80));
        pushButtonBlack->setFlat(true);
        label_4 = new QLabel(pageMachine);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(140, 150, 51, 31));
        label_4->setFont(font);
        pushButtonWhite = new QPushButton(pageMachine);
        pushButtonWhite->setObjectName(QStringLiteral("pushButtonWhite"));
        pushButtonWhite->setGeometry(QRect(350, 60, 91, 81));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/image/white.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonWhite->setIcon(icon3);
        pushButtonWhite->setIconSize(QSize(80, 80));
        pushButtonWhite->setFlat(true);
        label_5 = new QLabel(pageMachine);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(380, 150, 51, 31));
        label_5->setFont(font);
        stackedWidget->addWidget(pageMachine);
        pageNetwork = new QWidget();
        pageNetwork->setObjectName(QStringLiteral("pageNetwork"));
        layoutWidget = new QWidget(pageNetwork);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 80, 301, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(30);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_2->addWidget(label_7);

        lineEditPort = new QLineEdit(layoutWidget);
        lineEditPort->setObjectName(QStringLiteral("lineEditPort"));

        horizontalLayout_2->addWidget(lineEditPort);

        radioButtonBlack = new QRadioButton(pageNetwork);
        radioButtonBlack->setObjectName(QStringLiteral("radioButtonBlack"));
        radioButtonBlack->setGeometry(QRect(160, 130, 89, 16));
        radioButtonBlack->setChecked(true);
        radioButtonWhite = new QRadioButton(pageNetwork);
        radioButtonWhite->setObjectName(QStringLiteral("radioButtonWhite"));
        radioButtonWhite->setGeometry(QRect(310, 130, 89, 16));
        toolButtonSure = new QToolButton(pageNetwork);
        toolButtonSure->setObjectName(QStringLiteral("toolButtonSure"));
        toolButtonSure->setGeometry(QRect(220, 170, 121, 41));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        toolButtonSure->setPalette(palette);
        toolButtonSure->setStyleSheet(QStringLiteral("border-image: url(:/new/prefix1/image/buttonBK.png);"));
        layoutWidget1 = new QWidget(pageNetwork);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(140, 30, 301, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(30);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        lineEditIP = new QLineEdit(layoutWidget1);
        lineEditIP->setObjectName(QStringLiteral("lineEditIP"));

        horizontalLayout->addWidget(lineEditIP);

        stackedWidget->addWidget(pageNetwork);

        gridLayout->addWidget(stackedWidget, 1, 0, 1, 6);

        pushButtonClose = new QPushButton(ModeWidget);
        pushButtonClose->setObjectName(QStringLiteral("pushButtonClose"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/image/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonClose->setIcon(icon4);
        pushButtonClose->setIconSize(QSize(35, 35));
        pushButtonClose->setFlat(true);

        gridLayout->addWidget(pushButtonClose, 0, 5, 1, 1);

        label = new QLabel(ModeWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(131, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(183, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        pushButtonBack = new QPushButton(ModeWidget);
        pushButtonBack->setObjectName(QStringLiteral("pushButtonBack"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/image/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBack->setIcon(icon5);
        pushButtonBack->setIconSize(QSize(35, 35));
        pushButtonBack->setFlat(true);

        gridLayout->addWidget(pushButtonBack, 0, 0, 1, 1);


        retranslateUi(ModeWidget);

        QMetaObject::connectSlotsByName(ModeWidget);
    } // setupUi

    void retranslateUi(QWidget *ModeWidget)
    {
        ModeWidget->setWindowTitle(QApplication::translate("ModeWidget", "ModeWidget", Q_NULLPTR));
        pushButtonMachine->setText(QString());
        label_2->setText(QApplication::translate("ModeWidget", "\344\272\272\346\234\272\345\257\271\346\210\230", Q_NULLPTR));
        label_3->setText(QApplication::translate("ModeWidget", "\347\275\221\347\273\234\345\257\271\346\210\230", Q_NULLPTR));
        pushButtonNetwork->setText(QString());
        pushButtonBlack->setText(QString());
        label_4->setText(QApplication::translate("ModeWidget", "\351\273\221\345\255\220", Q_NULLPTR));
        pushButtonWhite->setText(QString());
        label_5->setText(QApplication::translate("ModeWidget", "\347\231\275\345\255\220", Q_NULLPTR));
        label_7->setText(QApplication::translate("ModeWidget", "\345\257\271\346\226\271\347\253\257\345\217\243:", Q_NULLPTR));
        lineEditPort->setText(QApplication::translate("ModeWidget", "8888", Q_NULLPTR));
        radioButtonBlack->setText(QApplication::translate("ModeWidget", "\351\273\221\345\255\220", Q_NULLPTR));
        radioButtonWhite->setText(QApplication::translate("ModeWidget", "\347\231\275\345\255\220", Q_NULLPTR));
        toolButtonSure->setText(QApplication::translate("ModeWidget", "\347\241\256\345\256\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("ModeWidget", "\345\257\271\346\226\271ip:  ", Q_NULLPTR));
        lineEditIP->setText(QApplication::translate("ModeWidget", "127.0.0.1", Q_NULLPTR));
        pushButtonClose->setText(QString());
        label->setText(QApplication::translate("ModeWidget", "\350\257\267\351\200\211\346\213\251\345\257\271\346\210\230\346\250\241\345\274\217", Q_NULLPTR));
        pushButtonBack->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ModeWidget: public Ui_ModeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODEWIDGET_H
