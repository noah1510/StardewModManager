#pragma once

#include "simplegl.hpp"

class MainWindow : public Gtk::ApplicationWindow{
  public:
    explicit MainWindow(std::shared_ptr<Gtk::Application> app);
};