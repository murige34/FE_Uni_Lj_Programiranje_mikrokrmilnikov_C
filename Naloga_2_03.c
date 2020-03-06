#include <stdio.h>

int main()
{
	int x = 0, y = 10;
	
	if (x == 0 || ++y > 0){
		y = y + 10;
	}
	
	printf("x = %d, y = %d", x, y);
	
	// Komentar:
	// x = 0 in y = 20, saj se stavek ++y ne izvede
	// najprej se zgodi primerjava x==0, in ker je rezultat 1
	// ne preverja ostalih pogojev, saj 1 (logoèni) ali karkoli da 1...
	
	return 0;
}
