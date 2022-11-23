#include "include.h"
#include "grs-window.h"
#include "grs-GL-drawing.h"
#include "grs-objects.h"

int main(){
  
  grs_GL_Window myWindow = grs_GL_Window(800,500, grsColors::grs_BLACK);

  //myWindow.grs_GLScreen->bkgColor = grsColors::grs_WHITE;

  

  return myWindow.draw();


}

