#include <graphics.h>
#include <string.h>

class Window{
	int maxx,maxy;
	int x1,x2,y1,y2;
	char title[80];
public:
	Window(){
		maxx = getmaxx();
		maxy = getmaxy();
		x1 =  x2 = y1 = y2 = 0;
	}
	Window(int x1,int y1,int x2,int y2,char* t){
		maxx = getmaxx();
		maxy = getmaxy();
		this->x1 = x1;
		this->x2 = x2;
		this->y1 = y1;
		this->y2 = y2;
		strcpy(title,t);
		Draw();
	}
	void Draw(){
		setcolor(WHITE);
		//border
		rectangle(x1,y1,x2,y2);
		rectangle(x1,y1+16,x2,y2);
		//Title bar
		setfillstyle(1,BLUE);
		floodfill(x1+1,y1+1,WHITE);
		setviewport(x1,y1,x2-1,y1+15,1);
		outtextxy(5,5,title);
		setviewport(0,0,maxx,maxy,1);
	}
};