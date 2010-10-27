/********************************************************************************
** Form generated from reading UI file 'adddialog.ui'
**
** Created: Wed Oct 27 12:26:02 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDDIALOG_H
#define UI_ADDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddDialogClass
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *nameText;
    QLineEdit *nameEdit;
    QLabel *emailText;
    QLineEdit *emailEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;

    void setupUi(QDialog *AddDialogClass)
    {
        if (AddDialogClass->objectName().isEmpty())
            AddDialogClass->setObjectName(QString::fromUtf8("AddDialogClass"));
        AddDialogClass->resize(387, 139);
        verticalLayout = new QVBoxLayout(AddDialogClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        nameText = new QLabel(AddDialogClass);
        nameText->setObjectName(QString::fromUtf8("nameText"));

        gridLayout->addWidget(nameText, 0, 0, 1, 1);

        nameEdit = new QLineEdit(AddDialogClass);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        gridLayout->addWidget(nameEdit, 0, 1, 1, 1);

        emailText = new QLabel(AddDialogClass);
        emailText->setObjectName(QString::fromUtf8("emailText"));

        gridLayout->addWidget(emailText, 1, 0, 1, 1);

        emailEdit = new QLineEdit(AddDialogClass);
        emailEdit->setObjectName(QString::fromUtf8("emailEdit"));

        gridLayout->addWidget(emailEdit, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(AddDialogClass);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout->addWidget(okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AddDialogClass);
        QObject::connect(okButton, SIGNAL(clicked()), AddDialogClass, SLOT(accept()));

        QMetaObject::connectSlotsByName(AddDialogClass);
    } // setupUi

    void retranslateUi(QDialog *AddDialogClass)
    {
        AddDialogClass->setWindowTitle(QApplication::translate("AddDialogClass", "Add Address", 0, QApplication::UnicodeUTF8));
        nameText->setText(QApplication::translate("AddDialogClass", "Name:", 0, QApplication::UnicodeUTF8));
        emailText->setText(QApplication::translate("AddDialogClass", "Email:", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("AddDialogClass", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddDialogClass: public Ui_AddDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDIALOG_H
