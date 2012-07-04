#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H

#include <QtGui/QMainWindow>
#include "ui_addressbook.h"

class AddressBook : public QMainWindow
{
    Q_OBJECT

public:
    AddressBook(QWidget *parent = 0, Qt::WFlags flags = 0);
    ~AddressBook();

private:
    Ui::AddressBookClass ui;
};

#endif // ADDRESSBOOK_H
