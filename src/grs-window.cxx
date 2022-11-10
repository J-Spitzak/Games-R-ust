#include "grs.h"




void grs_GL_Screen::draw() {
        if (!valid()) {
            valid(1);
            glLoadIdentity();
            glViewport(0,0,pixel_w(),pixel_h());
        }
        if (this->bkgColor == grsColors::grs_BLACK){
            glClearColor(0.0,0.0,0.0,1.0);
        }
        else if (this->bkgColor == grsColors::grs_WHITE){
            glClearColor(1.0,1.0,1.0,1.0);
        }
        glClear(GL_COLOR_BUFFER_BIT);
        glEnd();
}





grsWindow::grsWindow(int xscale, int yscale, ScreenType screenType = ScreenType::grs_GLScreen){

    this->windowFL = new Fl_Window(xscale, yscale);

    if (screenType == ScreenType::grs_GLScreen){

        this->grs_GLScreen = new grs_GL_Screen(0,0,xscale,yscale);

        this->windowFL->add( this->grs_GLScreen );


    }
        //grs_GL_Screen MyWindow(0,0,xscale,yscale);
        this->windowFL->end();
        this->windowFL->show();
        // MyWindow.show();
        
};

int grsWindow::draw() {
    return Fl::run();
};
