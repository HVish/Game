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
		setcolor(RED);
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
		setcolor(RED);
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
		setcolor(RED);
		midx = getmaxx()/6;
		midy = 60;

		for(i=SOLID_FILL;i<USER_FILL;i++)
		{
			setfillstyle(i,getmaxcolor());
			bar(midx-50,midy-100,midx+50,midy+100);
		}
	}

};