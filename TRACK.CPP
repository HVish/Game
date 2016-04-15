#include <graphics.h>
#include <stdlib.h>
#include <iostream.h>
#include <conio.h>
#include "game\include\Keyboard.h"
#include "game\include\mouse.h"
#include "game\include\sound.h"

int main()
{
	clrscr();
	Keyboard k;
	mouse mo;
	sounds s;
	int gdriver = DETECT , gmode;
	int g=DETECT,m;

	initgraph(&gdriver, &gmode, "C:\\tc\\bgi");  //initialise graphics mode.
	setbkcolor(RED);

	int xmax1 , ymax1 , xmax2 , ymax2;
	ymax1 = getmaxy();          //separation in the track.
	xmax1 = getmaxx()/3;
	ymax2 = getmaxy();
	xmax2 = getmaxx()*2/3;

	line(xmax1,0,xmax1,ymax1);         //left line.
	line(xmax2,0,xmax2,ymax2);         //right line.

	int key,temp=0,x,y,cl;

	while(key!=ARROW_DOWN)
	{
	key = k.GetKeyCode();
	if(key==ARROW_LEFT)
	{
		temp=temp-1;
	}
	if(key==ARROW_RIGHT)
	{
		temp=temp+1;
	}

	 if(temp==-1)
	 {
	   //	setbkcolor(GREEN);
		k.barleft();
	 }

	 if(temp==0)
	 {
	   //	setbkcolor(YELLOW);
		k.barcenter();
	 }

	 if(temp==1)
	 {
	   //	setbkcolor(RED);
		k.barright();
	 }
	}

	getch();
	closegraph();
	return 0;
}