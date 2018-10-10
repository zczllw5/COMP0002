// this program is for drawing a heptagon

#include "graphics.h"

int main(void)
{

drawLine(30,250,300,250);
drawLine(300,250,400,160);

//draw the main building
drawRect(200,50,100,200);

//the roof
drawLine(200,50,220,15);
drawLine(220,15,320,15);
drawLine(320,15,300,50);

// draw the side
drawLine(320,15,320,232);

//draw the window
drawRect(210,70,30,30);
drawRect(210,110,30,30);
drawRect(210,150,30,30);
drawRect(210,190,30,30);
drawRect(260,70,30,30);
drawRect(260,110,30,30);
drawRect(260,150,30,30);
drawRect(260,190,30,30);
return 0;
}
