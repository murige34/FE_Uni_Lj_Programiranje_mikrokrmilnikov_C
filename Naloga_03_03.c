#include <stdio.h>

int main(void) {
	int x, y;
	
	x = (y = 3, y += 2, y + 1); /* x postane enak 6 in y 5 */
	printf("x = %d,   y = %d\n", x, y);
	
	// Odstranimo par oklepajev
	x = y = 3, y += 2, y + 1; /* x postane enak 3 in y 5, glej prioritete */
	printf("x = %d,   y = %d\n", x, y);
	
	return 0;
}
