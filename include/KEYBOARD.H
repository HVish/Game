#include <dos.h>
#include <conio.h>

#define ARROW_UP 72
#define ARROW_DOWN 80
#define ARROW_LEFT 75
#define ARROW_RIGHT 77

#define ALT_F4 107

class Keyboard{
	int ascii;
	int scan;
public:
	Keyboard(){
		ascii = scan = -1;
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
};