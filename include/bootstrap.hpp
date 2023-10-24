#pragma once

#include "appLauncher.hpp"
#include "logger.hpp"

/**
 * @brief The name of this application.
 * It is public to allow all parts of the code to access it easily.
 */
const std::string appName = "de.sakurajin.stardew_mod_manager";

class BootstrapApp : public SimpleGFX::SimpleGL::appLauncher {
  private:

    /**
     * @brief The logger to handle all logging for this application
     */
    std::shared_ptr<SimpleGFX::logger> loggingInterface = nullptr;

    /**
     * @brief The constructor is private to make sure this core class only exists once.
     * Use getInstance() if you want a pointer to an object of this class.
     */
    BootstrapApp();

    /**
     * @brief Actually create the correct window
     */
    void load() override;

  public:
    /**
     * @brief get the logging interface for the application
     * @return A shared pointer to the logger.
     */
    [[nodiscard]]
    std::shared_ptr<SimpleGFX::logger> getLogger() const;

    /**
     * @brief Get the instance of the application
     * This can also be used to access the logger and other parts of the app.
     * @return A shared pointer to an instance of this class
     */
    [[nodiscard]]
    static std::shared_ptr<BootstrapApp> getInstance() {
        static std::shared_ptr<BootstrapApp> instance = std::shared_ptr<BootstrapApp>(new BootstrapApp());
        return instance;
    }
};