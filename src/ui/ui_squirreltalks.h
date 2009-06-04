/********************************************************************************
** Form generated from reading ui file 'squirreltalks.ui'
**
** Created: Thu Jun 4 14:04:48 2009
**      by: Qt User Interface Compiler version 4.5.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_SQUIRRELTALKS_H
#define UI_SQUIRRELTALKS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SquirrelTalksClass
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QFrame *frame_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SquirrelTalksClass)
    {
        if (SquirrelTalksClass->objectName().isEmpty())
            SquirrelTalksClass->setObjectName(QString::fromUtf8("SquirrelTalksClass"));
        SquirrelTalksClass->resize(854, 600);
        centralwidget = new QWidget(SquirrelTalksClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 70, 281, 421));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(330, 70, 281, 421));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(650, 480, 133, 33));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(670, 60, 113, 32));
        SquirrelTalksClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SquirrelTalksClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 854, 30));
        SquirrelTalksClass->setMenuBar(menubar);
        statusbar = new QStatusBar(SquirrelTalksClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SquirrelTalksClass->setStatusBar(statusbar);

        retranslateUi(SquirrelTalksClass);

        QMetaObject::connectSlotsByName(SquirrelTalksClass);
    } // setupUi

    void retranslateUi(QMainWindow *SquirrelTalksClass)
    {
        SquirrelTalksClass->setWindowTitle(QApplication::translate("SquirrelTalksClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("SquirrelTalksClass", "PushButton", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(SquirrelTalksClass);
    } // retranslateUi

};

namespace Ui {
    class SquirrelTalksClass: public Ui_SquirrelTalksClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQUIRRELTALKS_H
