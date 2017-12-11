/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "chesswidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelBlack;
    QLCDNumber *lcdNumberTime;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelWhite;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QLCDNumber *lcdNumberBlack;
    QWidget *widget_6;
    QLabel *label_2;
    QWidget *widget_8;
    ChessWidget *chessboard;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_4;
    QLCDNumber *lcdNumberWhite;
    QWidget *widget_7;
    QLabel *label_3;
    QWidget *widget_9;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *labelMode;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QStringLiteral("MainWidget"));
        MainWidget->resize(601, 430);
        verticalLayout = new QVBoxLayout(MainWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_5 = new QWidget(MainWidget);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, -1, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(83, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        widget_10 = new QWidget(widget_5);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_3 = new QHBoxLayout(widget_10);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelBlack = new QLabel(widget_10);
        labelBlack->setObjectName(QStringLiteral("labelBlack"));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(16);
        labelBlack->setFont(font);
        labelBlack->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelBlack);


        horizontalLayout_5->addWidget(widget_10);

        lcdNumberTime = new QLCDNumber(widget_5);
        lcdNumberTime->setObjectName(QStringLiteral("lcdNumberTime"));
        lcdNumberTime->setFrameShape(QFrame::NoFrame);
        lcdNumberTime->setDigitCount(2);

        horizontalLayout_5->addWidget(lcdNumberTime);

        widget_11 = new QWidget(widget_5);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        widget_11->setMinimumSize(QSize(0, 0));
        widget_11->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_4 = new QHBoxLayout(widget_11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        labelWhite = new QLabel(widget_11);
        labelWhite->setObjectName(QStringLiteral("labelWhite"));
        labelWhite->setMinimumSize(QSize(0, 0));
        labelWhite->setFont(font);
        labelWhite->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(labelWhite);


        horizontalLayout_5->addWidget(widget_11);

        horizontalSpacer_4 = new QSpacerItem(83, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 2);
        horizontalLayout_5->setStretch(2, 1);
        horizontalLayout_5->setStretch(3, 2);
        horizontalLayout_5->setStretch(4, 1);

        verticalLayout->addWidget(widget_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(20, -1, 20, -1);
        widget_3 = new QWidget(MainWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lcdNumberBlack = new QLCDNumber(widget_3);
        lcdNumberBlack->setObjectName(QStringLiteral("lcdNumberBlack"));
        lcdNumberBlack->setFrameShape(QFrame::NoFrame);
        lcdNumberBlack->setDigitCount(2);

        verticalLayout_3->addWidget(lcdNumberBlack);

        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName(QStringLiteral("widget_6"));

        verticalLayout_3->addWidget(widget_6);

        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/black.png")));
        label_2->setScaledContents(true);

        verticalLayout_3->addWidget(label_2);

        widget_8 = new QWidget(widget_3);
        widget_8->setObjectName(QStringLiteral("widget_8"));

        verticalLayout_3->addWidget(widget_8);

        verticalLayout_3->setStretch(0, 3);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 2);
        verticalLayout_3->setStretch(3, 1);

        horizontalLayout_2->addWidget(widget_3);

        chessboard = new ChessWidget(MainWidget);
        chessboard->setObjectName(QStringLiteral("chessboard"));

        horizontalLayout_2->addWidget(chessboard);

        widget_4 = new QWidget(MainWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        verticalLayout_4 = new QVBoxLayout(widget_4);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lcdNumberWhite = new QLCDNumber(widget_4);
        lcdNumberWhite->setObjectName(QStringLiteral("lcdNumberWhite"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
        lcdNumberWhite->setPalette(palette);
        lcdNumberWhite->setFrameShape(QFrame::NoFrame);
        lcdNumberWhite->setDigitCount(2);

        verticalLayout_4->addWidget(lcdNumberWhite);

        widget_7 = new QWidget(widget_4);
        widget_7->setObjectName(QStringLiteral("widget_7"));

        verticalLayout_4->addWidget(widget_7);

        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/image/white.png")));
        label_3->setScaledContents(true);

        verticalLayout_4->addWidget(label_3);

        widget_9 = new QWidget(widget_4);
        widget_9->setObjectName(QStringLiteral("widget_9"));

        verticalLayout_4->addWidget(widget_9);

        verticalLayout_4->setStretch(0, 3);
        verticalLayout_4->setStretch(1, 1);
        verticalLayout_4->setStretch(2, 2);
        verticalLayout_4->setStretch(3, 1);

        horizontalLayout_2->addWidget(widget_4);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 5);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_2);

        widget_2 = new QWidget(MainWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(178, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        labelMode = new QLabel(widget_2);
        labelMode->setObjectName(QStringLiteral("labelMode"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font1.setPointSize(26);
        labelMode->setFont(font1);
        labelMode->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelMode);

        horizontalSpacer_2 = new QSpacerItem(177, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 5);
        verticalLayout->setStretch(2, 1);

        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QApplication::translate("MainWidget", "Form", Q_NULLPTR));
        labelBlack->setText(QApplication::translate("MainWidget", "\346\210\221\346\226\271\351\273\221\345\255\220\344\270\213", Q_NULLPTR));
        labelWhite->setText(QApplication::translate("MainWidget", "\345\257\271\346\226\271\347\231\275\345\255\220\344\270\213", Q_NULLPTR));
        label_2->setText(QString());
        label_3->setText(QString());
        labelMode->setText(QApplication::translate("MainWidget", "\344\272\272\346\234\272\345\257\271\346\210\230\346\250\241\345\274\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
