/* ---------------- Programiranje C ---------------------
// Programiranje mikrokrmilnikov, demonstrator 2019/2020
// Programiranje II, demonstrator 2019/2020
// Martin Urigelj
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned int x = 217;
	while (x > 0){
		if (x > 0x7FFFFFFF){ //predpostavimo, da je int 32-biten
			printf("1");
		}
		else{
			printf("0");
		}
		x *= 2;
	}
	
	// Program izpiše 32 bitni binarni zapis našega števila
	// stavek if (x > 0x7FFFFFFF) pogleda, èe je MSB bit od x enak 1 ali 0 in ga izpiše,
	// x *= 2 nam binarni zapis premakne za eno mesto v levo in je enak x <<= 1
	
	return 0;
}
