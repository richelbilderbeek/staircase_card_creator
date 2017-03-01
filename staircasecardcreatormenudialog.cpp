#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wunused-but-set-parameter"
#include "staircasecardcreatormenudialog.h"

#include <algorithm>
#include <cassert>
#include <ctime>
#include <fstream>
#include <iostream>
#include <iterator>

#include <boost/scoped_ptr.hpp>

#include <QImage>

#include "fileio.h"
#include "staircasecard.h"
#include "textcanvas.h"
#pragma GCC diagnostic pop

ribi::scc::MenuDialog::MenuDialog()
{

}

int ribi::scc::MenuDialog::ExecuteSpecific(const std::vector<std::string>& /* argv */) noexcept
{
  {
    std::srand(std::time(0));
    StaircaseCard card{8,10};
    card.ShuffleAesthetic();
    std::cout << card.ToTextCanvasCompact() << '\n';
    std::cout << card.ToTextCanvas() << '\n';
  }
  return 0;
}

ribi::About ribi::scc::MenuDialog::GetAbout() const noexcept
{
  ribi::About a {
    "Richel Bilderbeek",
    "StaircaseCardCreator",
    "tool to generate staircase cards",
    "the 6th of March 2014",
    "2010-2015",
    "http://www.richelbilderbeek.nl/ToolStaircaseCardCreator.htm",
    GetVersion(),
    GetVersionHistory()
  };
  a.AddLibrary("FileIo version: " + fileio::FileIo().GetVersion());
  return a;
}


ribi::Help ribi::scc::MenuDialog::GetHelp() const noexcept
{
  return ribi::Help(
    this->GetAbout().GetFileTitle(),
    this->GetAbout().GetFileDescription(),
    {
    },
    {
    }
  );
}

std::string ribi::scc::MenuDialog::GetVersion() const noexcept
{
  return "2.0";
}

std::vector<std::string> ribi::scc::MenuDialog::GetVersionHistory() const noexcept
{
  const std::vector<std::string> v {
    "2010-xx-xx: version 1.0: initial version",
    "2014-02-26: version 1.1: first versioning",
    "2014-03-06: version 1.2: added aesthetic functions",
    "2015-11-23: version 2.0: moved to own GitHub",
  };
  return v;
}
