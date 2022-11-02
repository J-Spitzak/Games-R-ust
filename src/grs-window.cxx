#include "grs.h"


class grs_GL_Window : public Fl_Gl_Window {
    void draw();
    public:
    grs_GL_Window(int X, int Y, int W, int H, const char *L = 0)
    : Fl_Gl_Window(X, Y, W, H, L) {};
};

void grs_GL_Window::draw() {
        if (!valid()) {
            valid(1);
            glLoadIdentity();
            glViewport(0,0,pixel_w(),pixel_h());
        }
        glClearColor(0.0,0.0,0.0,1.0);
        glClear(GL_COLOR_BUFFER_BIT);
        glEnd();
        printf("inside draw function \n");
}





grsWindow::grsWindow(int xscale, int yscale, ScreenType screenType){
    this->windowFL = new Fl_Window(xscale, yscale);
    if (screenType == ScreenType::grs_GLScreen){

        

        this->windowFL->add( new grs_GL_Window(0,0,xscale,yscale) );


    }
        //grs_GL_Window MyWindow(0,0,xscale,yscale);
        this->windowFL->end();
        this->windowFL->show();
        // MyWindow.show();
        
};

// int grsWindow::draw() {
//     //return Fl::run();
// };
