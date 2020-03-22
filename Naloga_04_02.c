/* ---------------- Programiranje C ---------------------
// Programiranje mikrokrmilnikov, demonstrator 2019/2020
// Programiranje II, demonstrator 2019/2020
// Martin Urigelj
*/

#include <stdio.h>
#include <stdlib.h>

#define ST_BITOV 8

void decToBin(int dec, int len, int sign){
	int mask = 1<<(len-1);
	// preveri ce je pretvorba mozna
	if(dec < 0 && !sign){
		printf("predznak");
	}else if( (!sign && dec >= (1<<len) ) || (sign && (dec >= (1<<(len-1)) || dec < -(1<<(len-1)) ) ) ){
		printf("obmocje ");
	}else{
		if(sign){
			// MSB predznacenih stevil
			printf("%d", dec < 0);
			mask >>= 1;
		}
		for(; mask > 0; mask >>= 1){
			printf("%d", (mask & dec) != 0);
		}
	}
}

void izpisVrstice(int dec){
	printf("%10d",  dec);
	printf("             ");
	decToBin(dec, ST_BITOV, 1);
	printf("       ");
	decToBin(dec, ST_BITOV, 0);
	printf("\n");
}

int main()
{
	printf("Desetiska vrednost        Dvojiska vrednost\n");
	printf("                    (Predznacena)  (Nepredznacena)\n");
	printf("--------------------------------------------------\n");
	izpisVrstice(214);
	izpisVrstice(127);
	izpisVrstice(-21);
	izpisVrstice( 45);
	izpisVrstice(-128);
	izpisVrstice(128);
	
	return 0;
}
