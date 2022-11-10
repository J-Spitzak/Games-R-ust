#include "grs.h"


int main(){
  
  grs_GL_Window myWindow = grs_GL_Window(800,500, grsColors::grs_WHITE);

  //myWindow.grs_GLScreen->bkgColor = grsColors::grs_WHITE;

  

  return myWindow.draw();


}

