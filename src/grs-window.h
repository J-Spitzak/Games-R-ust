#include "include.h"

class grs_GL_Screen : public Fl_Gl_Window {

    void draw();
    
    public:

    //vector<grs_Object>;

    void draw_obj(); //function will add a grs_object to a list
    //to have their draw function utilized later

    grsColors bkgColor;

    grs_GL_Screen(int X, int Y, int W, int H, const char *L = 0) : Fl_Gl_Window(X, Y, W, H, L) {};
};

class grs_GL_Window {

    private:

    Fl_Window *windowFL;

    public:

    grs_GL_Screen *grs_GLScreen;

    grs_GL_Window(int xscale, int yscale, grsColors background_color);

    virtual int draw();
};

