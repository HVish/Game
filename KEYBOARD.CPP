#include <iostream.h>
#include <conio.h>
#include "game\include\keyboard.h"

void main(){
	Keyboard k;
	clrscr();
	int key = k.GetKeyCode();
	switch(key){
		case ARROW_UP:
			cout<<"Up Arrow key";
			break;
		case ARROW_DOWN:
			cout<<"Down Arrow key";
			break;
		case ARROW_LEFT:
			cout<<"Left Arrow key";
			break;
		case ARROW_RIGHT:
			cout<<"Right Arrow key";
			break;
		case ALT_F4:
			cout<<"Alt + F4";
			break;
		default:
			cout<<"Code: "<<key<<"\nNot Arrow key";
			break;
	}
	if(k.IsSpecialKey())
		cout<<"\nSpecial Key!";
	else
		cout<<"\nNot a special key!";
	getch();
	clrscr();
}