#include <stdio.h>

int main(void) {
	int x = 10, y;
	
	if (x > 0) {
		y = 1;
	}
	else {
		y = 0;
	}
	
	// If..else stavek nadomešèen z switch stavkom
	switch(x > 0){
		case 1:
			y = 1;
			break;
		default:
			y = 0;
			break;
	}
	
	return 0;
}
