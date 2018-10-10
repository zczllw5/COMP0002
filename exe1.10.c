//draw chart

#include "graphics.h"

int main(void)
{

//draw the chart
drawLine(30,50,30,250);
drawLine(25,250,330,250);
drawString("0",0,255);

drawLine(25,200,30,200);
drawString("50",0,205);

drawLine(25,150,30,150);
drawString("100",0,155);

drawLine(25,100,30,100);
drawString("150",0,105);

//draw the bar
setColour(blue);
fillRect(30,190,60,60);

drawString("CDs",50,265);

setColour(green);
fillRect(90,110,60,140);
drawString("DVDs",110,265);

setColour(red);
fillRect(150,130,60,120);
drawString("Books",165,265);

setColour(yellow);
fillRect(210,160,60,90);
drawString("Clothes",220,265);

setColour(pink);
fillRect(270,110,60,140);
drawString("Shoes",285,265);


return 0;
}
