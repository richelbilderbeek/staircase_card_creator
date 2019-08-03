#ifndef QTSTAIRCASECARDCREATORMAINDIALOG_H
#define QTSTAIRCASECARDCREATORMAINDIALOG_H

//#include <string>
//#include <vector>

#pragma GCC diagnostic push

#include "qthideandshowdialog.h"
#pragma GCC diagnostic pop

struct QPlainTextEdit;

namespace Ui {
  class QtStaircaseCardCreatorMainDialog;
}

namespace ribi {
namespace scc {

class QtStaircaseCardCreatorMainDialog : public QtHideAndShowDialog
{
  Q_OBJECT //!OCLINT

public:
  explicit QtStaircaseCardCreatorMainDialog(QWidget *parent = 0) noexcept;
  QtStaircaseCardCreatorMainDialog(const QtStaircaseCardCreatorMainDialog&) = delete;
  QtStaircaseCardCreatorMainDialog& operator=(const QtStaircaseCardCreatorMainDialog&) = delete;
  ~QtStaircaseCardCreatorMainDialog() noexcept;

private slots:
  void something_changed();

  void on_box_n_rows_valueChanged(int arg1);

  void on_box_n_cols_valueChanged(int arg1);

  void on_box_seed_valueChanged(int arg1);

private:
  Ui::QtStaircaseCardCreatorMainDialog *ui;
};

} //~namespace scc
} //~namespace ribi

#endif // QTSTAIRCASECARDCREATORMAINDIALOG_H
