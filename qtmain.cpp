



#include <QApplication>

#include "qtstaircasecardcreatormenudialog.h"


int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  ribi::scc::QtStaircaseCardCreatorMenuDialog w;
  w.show();
  return a.exec();
}
