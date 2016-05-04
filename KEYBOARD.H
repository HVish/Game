#include <dos.h>
#include <conio.h>
#include <graphics.h>

#define ARROW_UP 72
#define ARROW_DOWN 80
#define ARROW_LEFT 75
#define ARROW_RIGHT 77

#define ALT_F4 107

class Keyboard{
	int ascii;
	int scan;
	int i,midx,midy;

public:
	Keyboard(){
		ascii = scan = -1;
		midx=getmaxx()/2;
		midy=60;
	}
	int GetKeyCode(){
		ascii = getch();
		if(ascii == 0){
			scan = getch();
			return scan;
		} else {
			return ascii;
		}
	}
	int IsSpecialKey(){
		return !(ascii);
	}

	int barcenter()
	{
	 i=200;
	   line(30+i,100,110+i,100);
	   line(110+i,100,130+i,120);
	   line(130+i,120,130+i,150);
	   line(30+i,150,50+i,150);
	   line(60+i,150,100+i,150);
	   line(110+i,150,130+i,150);
	   line(30+i,100,30+i,150);
	   line(30+i,105,114+i,105);
	   line(30+i,115,124+i,115);
	   circle(55+i,150,5);	// Back tyres of bus
	   circle(55+i,150,2);
	   circle(105+i,150,5);    // Front tyres of bus
	   circle(105+i,150,2);
	   outtextxy(35+i,130, "BATTLE RUSH");


	/*
		midx = getmaxx()/2;
		midy = 60;

	   //	for(i=SOLID_FILL;i<USER_FILL;i++)
		//{
			setbkcolor(RED);
			setfillstyle(SOLID_FILL,BLUE);
			rectangle(midx-50,midy-100,midx+50,midy+100);
		   bar(midx-50,midy-100,midx+50,midy+100);
		//}       */
		return 0;
	}

	int barright()
	{
		i=400;

	   line(30+i,100,110+i,100);
	   line(110+i,100,130+i,120);
	   line(130+i,120,130+i,150);
	   line(30+i,150,50+i,150);
	   line(60+i,150,100+i,150);
	   line(110+i,150,130+i,150);
	   line(30+i,100,30+i,150);
	   line(30+i,105,114+i,105);
	   line(30+i,115,124+i,115);
	   circle(55+i,150,5);	// Back tyres of bus
	   circle(55+i,150,2);
	   circle(105+i,150,5);    // Front tyres of bus
	   circle(105+i,150,2);
	   outtextxy(35+i,130, "BATTLE RUSH");
	/*
		midx = getmaxx()/6*5;
		midy = 60;

		//for(i=SOLID_FILL;i<USER_FILL;i++)
		//{
			setbkcolor(RED);
			setfillstyle(SOLID_FILL,BLUE);
			rectangle(midx-50,midy-100,midx+50,midy+100);
			bar(midx-50,midy-100,midx+50,midy+100);
		//}*/
	}

	void barleft()
	{
	  i =10;
	   line(30+i,100,110+i,100);
	   line(110+i,100,130+i,120);
	   line(130+i,120,130+i,150);
	   line(30+i,150,50+i,150);
	   line(60+i,150,100+i,150);
	   line(110+i,150,130+i,150);
	   line(30+i,100,30+i,150);
	   line(30+i,105,114+i,105);
	   line(30+i,115,124+i,115);
	   circle(55+i,150,5);	// Back tyres of bus
	   circle(55+i,150,2);
	   circle(105+i,150,5);    // Front tyres of bus
	   circle(105+i,150,2);
	   outtextxy(35+i,130, "BATTLE RUSH");
	   /*	midx = getmaxx()/6;
		midy = 60;

		//for(i=SOLID_FILL;i<USER_FILL;i++)
		/*{
			setbkcolor(RED);
			setfillstyle(SOLID_FILL,BLUE);
			rectangle(midx-50,midy-100,midx+50,midy+100);
			bar(midx-50,midy-100,midx+50,midy+100);
		//}*/
	}
};