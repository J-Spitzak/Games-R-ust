#include "grs.h"



grsWindow myWindow = grsWindow(1000,500,ScreenType::grs_GLScreen);


int main(){
  return myWindow.draw();

}
