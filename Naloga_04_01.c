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
	printf("Dvojiska vrednost        Desetiska Vrednost\n");
	printf("                    (Predznacena)  (Nepredznacena)\n");
	printf("--------------------------------------------------\n");
	printf("     ");	hexToBin(0x1d, 8);	printf(" %14d %14d\n", (char) 0x1d, (unsigned char) 0x1d);
	printf("     ");	hexToBin(0x95, 8);	printf(" %14d %14d\n", (char) 0x95, (unsigned char) 0x95);
	printf("     ");	hexToBin(0x7f, 8);	printf(" %14d %14d\n", (char) 0x7f, (unsigned char) 0x7f);
	printf("     ");	hexToBin(0xea, 8);	printf(" %14d %14d\n", (char) 0xea, (unsigned char) 0xea);
	
    return 0;
}
