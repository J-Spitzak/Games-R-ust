#include "grs.h"


grsWindow::grsWindow(int xscale, int yscale, ScreenType screenType){
        this->windowFL = new Fl_Window(xscale, yscale);
        if (screenType == ScreenType::grs_GLScreen){
            this->windowFL->end();
            this->windowFL->show();
        }
        
    };

    int grsWindow::draw() {
        return Fl::run();
    };
