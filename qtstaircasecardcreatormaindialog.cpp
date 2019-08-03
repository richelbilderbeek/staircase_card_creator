#include "qtstaircasecardcreatormaindialog.h"

#include <algorithm>
#include <cassert>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>
#include <sstream>
#include <vector>

#include "textcanvas.h"
#include "staircasecard.h"

#pragma GCC diagnostic push


#include "ui_qtstaircasecardcreatormaindialog.h"
#pragma GCC diagnostic pop

ribi::scc::QtStaircaseCardCreatorMainDialog::QtStaircaseCardCreatorMainDialog(QWidget *parent) noexcept
  : QtHideAndShowDialog(parent),
    ui(new Ui::QtStaircaseCardCreatorMainDialog)
{
  ui->setupUi(this);
  something_changed();
}

ribi::scc::QtStaircaseCardCreatorMainDialog::~QtStaircaseCardCreatorMainDialog() noexcept
{
  delete ui;
}

void ribi::scc::QtStaircaseCardCreatorMainDialog::something_changed()
{
  const int n_cols{ui->box_n_cols->value()};
  const int n_rows{ui->box_n_rows->value()};
  StaircaseCard card{n_cols, n_rows};
  card.ShuffleAesthetic();
  ui->grade->display(card.RateAesthetics());
  std::stringstream s;
  s << card.ToTextCanvas();
  ui->text->setPlainText(s.str().c_str());
}


void ribi::scc::QtStaircaseCardCreatorMainDialog::on_box_n_rows_valueChanged(int)
{
  something_changed();
}

void ribi::scc::QtStaircaseCardCreatorMainDialog::on_box_n_cols_valueChanged(int)
{
  something_changed();
}

void ribi::scc::QtStaircaseCardCreatorMainDialog::on_box_seed_valueChanged(int)
{
  something_changed();
}
