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
	printf ("%hd\n", (short) 0xB09F);
	printf ("%hu\n", (unsigned short) 0xB09F);
	
	// 0xB09F = 0b 1011_0000_1001_1111
	// ker imamo na prvem(MSB) mestu 1, je v prvem primeru to tretirano kot predznak.
	// Èe bi imeli na MSB mestu 0, bi bila izpisa enaka (preizkusi z npr. 0x309F)
	
	return 0;
}
