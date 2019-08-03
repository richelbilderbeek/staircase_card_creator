

#include "qtstaircasecardcreatormenudialog.h"

#include "about.h"
#include "qtaboutdialog.h"
#include "qtstaircasecardcreatormaindialog.h"
#include "staircasecardcreatormenudialog.h"
#include "ui_qtstaircasecardcreatormenudialog.h"


ribi::scc::QtStaircaseCardCreatorMenuDialog::QtStaircaseCardCreatorMenuDialog(QWidget *parent) noexcept :
    QtHideAndShowDialog(parent),
    ui(new Ui::QtStaircaseCardCreatorMenuDialog)
{
  ui->setupUi(this);
}

ribi::scc::QtStaircaseCardCreatorMenuDialog::~QtStaircaseCardCreatorMenuDialog() noexcept
{
  delete ui;
}


void ribi::scc::QtStaircaseCardCreatorMenuDialog::on_button_about_clicked() noexcept
{
  ::ribi::About a = ::ribi::scc::MenuDialog().GetAbout();
  a.AddLibrary("QtHideAndShowDialog version: " + QtHideAndShowDialog::GetVersion());
  ::ribi::QtAboutDialog d(a);
  d.setWindowIcon(this->windowIcon());
  d.setStyleSheet(this->styleSheet());
  this->ShowChild(&d);
}

void ribi::scc::QtStaircaseCardCreatorMenuDialog::on_button_quit_clicked() noexcept
{
  close();
}

void ribi::scc::QtStaircaseCardCreatorMenuDialog::on_button_start_clicked() noexcept
{
  QtStaircaseCardCreatorMainDialog d;
  ShowChild(&d);
}
