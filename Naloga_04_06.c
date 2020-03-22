/* ---------------- Programiranje C ---------------------
// Programiranje mikrokrmilnikov, demonstrator 2019/2020
// Programiranje II, demonstrator 2019/2020
// Martin Urigelj
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	
	float x = 1e8;
	printf("Pristevamo 1 k float:\n");
	for( i = 0; i < 10; i++){
		x += 1;
		printf("%d  %10f\n", i, x);
	}
	
	double y = 1e8;
	printf("\nPristevamo 1 k double:\n");
	for( i = 0; i < 10; i++){
		y += 1;
		printf("%d  %10lf\n", i, y);
	}
	while (y < 2e8){
		y = y + 1;
	}
	
	// Pojasnilo
	// Ugotovili smo, da imajo realna števila v raèunalniškem zapisu omejeno
	// natanènost. Ko skušamo k floatu prišteti majhno vrednost (1/10^8) trenutne vrednosti,
	// le to presega našo natanènost in se vrednost ne spremeni.
	
	return 0;
}
