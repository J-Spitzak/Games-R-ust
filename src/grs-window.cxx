#include "include.h"
#include "grs-window.h"




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





grs_GL_Window::grs_GL_Window(int xscale, int yscale, grsColors background_color){

    this->windowFL = new Fl_Window(xscale, yscale);

    this->grs_GLScreen = new grs_GL_Screen(0,0,xscale,yscale);
    this->grs_GLScreen->bkgColor = background_color;

    this->windowFL->add( this->grs_GLScreen );

    this->windowFL->end();
    this->windowFL->show();
        
};

int grs_GL_Window::draw() {
    return Fl::run();
};
