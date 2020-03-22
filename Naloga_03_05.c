#include <stdio.h>

int main(void) {
	int x = 10, y=10;
	
	switch (x) {
		case 10:
		case 20: y *= 2; break;
		default: y /= 2;
	}
	
	// Switch stavek nadomešèen z If..else stavkom
	if(x == 10 || x == 20){
		y *= 2;
	}else{
		y /= 2;
	}
	
	return 0;
}
