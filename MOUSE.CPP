#include <iostream.h>
#include <graphics.h>
#include<conio.h>
#include "game\include\mouse.h"

void main()
{
	mouse ptr;
	clrscr();
	int x,y,cl,a,b;
	int g=DETECT,m;
	initgraph(&g,&m,"C:\tc\bgi");
	a=100;
	b=400;
	ptr.ptrposition(a,b);
	ptr.callptr();
	do
	{
		ptr.ptrstatus(x,y,cl);
		gotoxy(10,9);
		cout<<"\n\tmouse positionn is:"<<x<<y;
		cout<<"\n\tclick:"<<cl;
		cout<<"\n\tpress any key to hide the mouse";
	}while(!kbhit());
	getch();
	ptr.hideptr();
	cout<<"\n\n\tpress any key to exit";
	getch();
}