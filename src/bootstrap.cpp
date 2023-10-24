#include "bootstrap.hpp"
#include "MainWindow.hpp"

using namespace SimpleGFX;

BootstrapApp::BootstrapApp() : appLauncher(appName, Gio::Application::Flags::NONE, false) {
    loggingInterface = std::make_shared<SimpleGFX::logger>(loggingLevel::debug);

    *loggingInterface << loggingLevel::detail << "finished constructing the app";
}

void BootstrapApp::load() {
    auto mainWin = Gtk::make_managed<MainWindow>(getInstance());
    add_window(*mainWin);
    mainWin->set_visible(true);
}


std::shared_ptr<SimpleGFX::logger> BootstrapApp::getLogger() const {
    return loggingInterface;
}
