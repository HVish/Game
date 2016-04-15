#include <dos.h>
#include <conio.h>

/*
#define RESET 0
#define shwptr 1
#define hideptr 2
#define ptrstatus 3
#define ptrposition 4
*/

union REGS in,out;

class mouse{
public:
	int xpos,ypos,midx,midy;
public:
	mouse()
	{
		reset();
		xpos=1;
		ypos=1;
		midx=getmaxx()/2;
		midy=60;
	}
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

	int verlimit()
	{
		in.x.ax=7;
		in.x.cx=getmaxx()/3;
		in.x.dx=getmaxx()/3*2;
		int86(51,&in,&out);
		return 1;
	}

	int bar()
	{
		midx = getmaxx()/2;
		midy = 60;

		for(i=SOLID_FILL;i<USER_FILL;i++)
		{
			setfillstyle(i,getmaxcolor());
			bar(midx-50,midy-100,midx+50,midy+100);
		}
		return 0;
	}

	int barright()
	{
		midx = getmaxx()/6*5;
		midy = 60;

		for(i=SOLID_FILL;i<USER_FILL;i++)
		{
			setfillstyle(i,getmaxcolor());
			bar(midx-50,midy-100,midx+50,midy+100);
		}
	}

	void barleft()
	{
		midx = getmaxx()/6;
		midy = 60;

		for(i=SOLID_FILL;i<USER_FILL;i++)
		{
			setfillstyle(i,getmaxcolor());
			bar(midx-50,midy-100,midx+50,midy+100);
		}
	}

};





