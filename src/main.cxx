#include "grs.h"



grsWindow myWindow = grsWindow(500,500,ScreenType::grs_GLScreen);


int main(){
  //return myWindow.draw();
    return Fl::run();

}

