/********************************************************************************
** Form generated from reading UI file 'addressbook.ui'
**
** Created: Wed Oct 27 12:26:02 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOK_H
#define UI_ADDRESSBOOK_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddressBookClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QListWidget *nameLabel;
    QVBoxLayout *verticalLayout;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QLabel *emailLabel;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AddressBookClass)
    {
        if (AddressBookClass->objectName().isEmpty())
            AddressBookClass->setObjectName(QString::fromUtf8("AddressBookClass"));
        AddressBookClass->resize(600, 400);
        centralWidget = new QWidget(AddressBookClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        nameLabel = new QListWidget(centralWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        gridLayout->addWidget(nameLabel, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addButton = new QPushButton(centralWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        verticalLayout->addWidget(addButton);

        deleteButton = new QPushButton(centralWidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        verticalLayout->addWidget(deleteButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        emailLabel = new QLabel(centralWidget);
        emailLabel->setObjectName(QString::fromUtf8("emailLabel"));

        gridLayout->addWidget(emailLabel, 2, 0, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

        AddressBookClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AddressBookClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        AddressBookClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(AddressBookClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        AddressBookClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(AddressBookClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        AddressBookClass->setStatusBar(statusBar);

        retranslateUi(AddressBookClass);

        QMetaObject::connectSlotsByName(AddressBookClass);
    } // setupUi

    void retranslateUi(QMainWindow *AddressBookClass)
    {
        AddressBookClass->setWindowTitle(QApplication::translate("AddressBookClass", "AddressBook", 0, QApplication::UnicodeUTF8));
        addButton->setText(QApplication::translate("AddressBookClass", "Add", 0, QApplication::UnicodeUTF8));
        deleteButton->setText(QApplication::translate("AddressBookClass", "Delete", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddressBookClass", "<No item selected>", 0, QApplication::UnicodeUTF8));
        emailLabel->setText(QApplication::translate("AddressBookClass", "TextLabel", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("AddressBookClass", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddressBookClass: public Ui_AddressBookClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOK_H
