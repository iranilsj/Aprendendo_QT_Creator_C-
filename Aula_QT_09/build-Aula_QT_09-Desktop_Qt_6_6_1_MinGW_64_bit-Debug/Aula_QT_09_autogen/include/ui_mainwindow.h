/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_nome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label1;
    QLineEdit *txt_telefone;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label2;
    QLineEdit *txt_email;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_mostrar;
    QPushButton *btn_limpar;
    QPushButton *btn_fechar;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(617, 314);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 10, 561, 241));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        txt_nome = new QLineEdit(widget);
        txt_nome->setObjectName("txt_nome");

        horizontalLayout->addWidget(txt_nome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label1 = new QLabel(widget);
        label1->setObjectName("label1");

        horizontalLayout_2->addWidget(label1);

        txt_telefone = new QLineEdit(widget);
        txt_telefone->setObjectName("txt_telefone");

        horizontalLayout_2->addWidget(txt_telefone);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label2 = new QLabel(widget);
        label2->setObjectName("label2");

        horizontalLayout_3->addWidget(label2);

        txt_email = new QLineEdit(widget);
        txt_email->setObjectName("txt_email");

        horizontalLayout_3->addWidget(txt_email);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btn_mostrar = new QPushButton(widget);
        btn_mostrar->setObjectName("btn_mostrar");

        horizontalLayout_4->addWidget(btn_mostrar);

        btn_limpar = new QPushButton(widget);
        btn_limpar->setObjectName("btn_limpar");

        horizontalLayout_4->addWidget(btn_limpar);

        btn_fechar = new QPushButton(widget);
        btn_fechar->setObjectName("btn_fechar");

        horizontalLayout_4->addWidget(btn_fechar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 617, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        label1->setText(QCoreApplication::translate("MainWindow", "Telefone", nullptr));
        label2->setText(QCoreApplication::translate("MainWindow", "E-mail", nullptr));
        btn_mostrar->setText(QCoreApplication::translate("MainWindow", "Mostrar", nullptr));
        btn_limpar->setText(QCoreApplication::translate("MainWindow", "Limpar", nullptr));
        btn_fechar->setText(QCoreApplication::translate("MainWindow", "Fechar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
