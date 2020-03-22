/* ---------------- Programiranje C ---------------------
// Programiranje mikrokrmilnikov, demonstrator 2019/2020
// Programiranje II, demonstrator 2019/2020
// Martin Urigelj
*/

#include <stdio.h>
#include <stdlib.h>

void hexToBin(int hex, int len){
	int mask;
	for( mask = (1<<(len-1)); mask > 0; mask >>= 1 ){
		printf("%d", (mask & hex) != 0);
	}
}

int main()
{
	char x = (char) 0x9B; // -101
	short y = x;
	
	printf("char %d          ", x);	hexToBin(x, 8);
	printf("\nint  %d  ", y);	hexToBin(y, 16);
	
	// Èe spreminjamo 8 bitno predznaèeno vrednost v 16 bitno
	// zgornjim osmim bitom priredimo vrednost MSB 8-bitnega števila.
	
	return 0;
}
