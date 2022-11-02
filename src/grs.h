#ifndef grs_h
#define grs_h
#include <FL/Fl.H>
#include <FL/Fl_Double_Window.H>
#include <stdio.h>
#include <FL/Fl_Box.H>

#include <config.h>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/math.h>
#include <FL/gl.h>
#include <FL/Fl_Gl_Window.H>

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

    grsWindow(int xscale, int yscale, ScreenType screenType);

    //virtual int draw();
};

#endif
