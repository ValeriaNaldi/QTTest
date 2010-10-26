#include "addressbook.h"

AddressBook::AddressBook(QWidget *parent, Qt::WFlags flags)
    : QMainWindow(parent, flags)
{
  ui.setupUi(this);
}

AddressBook::~AddressBook()
{

}
