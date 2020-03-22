/* ---------------- Programiranje C ---------------------
// Programiranje mikrokrmilnikov, demonstrator 2019/2020
// Programiranje II, demonstrator 2019/2020
// Martin Urigelj
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	double x = 1;
	
	for(i = 0; i < 20 && x != 0; i++){
		x -= 0.1;
		printf("%24.20lf\n", x);
	}
	
	// Program sem rahlo predelal, da se vidi bistvo problema.
	// program se ne ustavi, ko je vrednost "0", ker ni toèno 0,
	// kar se lepo vidi, èe razširimo izpis na veè decimalnih mest
	// Tudi tukaj se izpostavlja problem natanènosti zapisa realnih števil v raèunalništvu.
	
	return 0;
}
