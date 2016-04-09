#include <conio.h>
#include "game\include\window.h"

void main(){
	int gd = DETECT,gm;
	initgraph(&gd,&gm,"..\\bgi");
	Window w(10,10,629,469,"Title Bar");
	getch();
	closegraph();
	restorecrtmode();
}