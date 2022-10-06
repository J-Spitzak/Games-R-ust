#include "grs.h"


enum ScreenType {
    grs_FLScreen, 
    grs_GLScreen,
    grs_FLGLScreen
};

enum grsColors {
    grs_RED,
    grs_BLUE,
    grs_GRAY,
    grs_WHITE,
    grs_BLACK
};



class grsWindow {

    private:

    Fl_Window *windowFL;

    public:

    grsWindow(int xscale, int yscale, ScreenType screenType){
        this->windowFL = new Fl_Window(xscale, yscale);
        if (screenType == ScreenType::grs_GLScreen){
            this->windowFL->end();
            this->windowFL->show();
        }
        
    };

    virtual int draw() {
        return Fl::run();
    };
};

