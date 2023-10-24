#include "bootstrap.hpp"

int main(int argc, char* argv[]){
    auto app = BootstrapApp::getInstance();

    return app->launch(argc, argv);
}
