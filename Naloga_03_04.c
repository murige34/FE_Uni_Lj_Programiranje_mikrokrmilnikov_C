#include <stdio.h>

int main(void) {
	int x, y;
	
	x = (y++, y + 2);	// a) x = 138,   y = 136
	printf("a) x = %d,   y = %d\n", x, y);
	
	x = y++, y + 2;		// b) x = 136,   y = 137
	printf("b) x = %d,   y = %d\n", x, y);
	
	x = y > 0 ? (y--, y + 10) : (y++, y - 10);	// c) x = 146,   y = 136
	printf("c) x = %d,   y = %d\n", x, y);
	
	x = y < 9 || y > 11 ? y : 1 - y;	// è) x = 136,   y = 136
	printf("è) x = %d,   y = %d\n", x, y);
	
	return 0;
}
