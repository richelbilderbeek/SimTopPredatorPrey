#ifndef SIMTOPPREDATORPREYMENUDIALOG_H
#define SIMTOPPREDATORPREYMENUDIALOG_H

#include <string>
#include <vector>

#include "about.h"
#include "help.h"
#include "menudialog.h"

namespace ribi {

///GUI independent GrayCoder menu dialog
struct SimTopPredatorPreyMenuDialog final : public MenuDialog
{
  SimTopPredatorPreyMenuDialog();
  About GetAbout() const noexcept override;
  Help GetHelp() const noexcept override;
  std::string GetVersion() const noexcept override;
  std::vector<std::string> GetVersionHistory() const noexcept override;

  private:
  int ExecuteSpecific(const std::vector<std::string>& argv) noexcept override;

  #ifndef NDEBUG
  static void Test() noexcept;
  #endif

};

} //~namespace ribi

#endif // SIMTOPPREDATORPREYMENUDIALOG_H
