#pragma GCC diagnostic push



#include <QApplication>

#include "qtstaircasecardcreatormenudialog.h"
#pragma GCC diagnostic pop

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  ribi::scc::QtStaircaseCardCreatorMenuDialog w;
  w.show();
  return a.exec();
}
