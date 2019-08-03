



#include <algorithm>
#include <fstream>
#include <iostream>
#include <vector>

#include <QDir>
#include <QFile>
#include <QFileInfoList>

#include "staircasecardcreatormenudialog.h"
#include "fileio.h"


int main(int argc, char* argv[])
{
  const std::vector<std::string> args { ribi::MenuDialog::ConvertArguments(argc,argv) };
  return ribi::scc::MenuDialog().Execute(args);
}
