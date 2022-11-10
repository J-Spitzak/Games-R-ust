#include "grs.h"


int main(){
  
  grsWindow myWindow = grsWindow(800,500, ScreenType::grs_GLScreen);

  myWindow.grs_GLScreen->bkgColor = grsColors::grs_WHITE;

  

  return myWindow.draw();


}

