#ifndef QTSTAIRCASECARDCREATORMENUDIALOG_H
#define QTSTAIRCASECARDCREATORMENUDIALOG_H



#include "qthideandshowdialog.h"


namespace Ui {
  class QtStaircaseCardCreatorMenuDialog;
}

namespace ribi {
namespace scc {

class QtStaircaseCardCreatorMenuDialog : public QtHideAndShowDialog
{
  Q_OBJECT //!OCLINT

public:
  explicit QtStaircaseCardCreatorMenuDialog(QWidget *parent = 0) noexcept;
  QtStaircaseCardCreatorMenuDialog(const QtStaircaseCardCreatorMenuDialog&) = delete;
  QtStaircaseCardCreatorMenuDialog& operator=(const QtStaircaseCardCreatorMenuDialog&) = delete;
  ~QtStaircaseCardCreatorMenuDialog() noexcept;

private:
  Ui::QtStaircaseCardCreatorMenuDialog *ui;

private slots:
  void on_button_about_clicked() noexcept;
  void on_button_quit_clicked() noexcept;
  void on_button_start_clicked() noexcept;
};

} //~namespace c2h
} //~namespace ribi

#endif // QTSTAIRCASECARDCREATORMENUDIALOG_H
