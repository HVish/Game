#include <dos.h>
//#include<iostream.h>
#include <conio.h>
/*
#define RESET 0
#define shwptr 1
#define hideptr 2
#define ptrstatus 3
#define ptrposition 4
#define horlimit 7
#define verlimit 8
*/
union REGS in,out;

class mouse{
public:
	int reset()
	{
		in.x.ax=0;
		int86(51,&in,&out);
		return 1;
	}


	int callptr()
	{
		in.x.ax=1;
		int86(51,&in,&out);
		return 1;
	}

	void ptrstatus(int &xpos ,int &ypos ,int &click)
	{
		in.x.ax=3;
		int86(51,&in,&out);
		click=out.x.bx;
		xpos=out.x.cx;
		ypos=out.x.dx;
	}

	int hideptr()
	{
		in.x.ax=2;
		int86(51,&in,&out);
		return 1;
	}

	void ptrposition(int &xpos,int &ypos)
	{
		in.x.ax=4;
		in.x.cx=xpos;
		in.x.dx=ypos;
		int86(51,&in,&out);
	}
};





