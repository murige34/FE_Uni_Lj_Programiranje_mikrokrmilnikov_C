/* ---------------- Programiranje C ---------------------
// Programiranje mikrokrmilnikov, demonstrator 2019/2020
// Programiranje II, demonstrator 2019/2020
// Martin Urigelj
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	float x, y, *p, *q;
	p = &x;
	y = 10;
	
	printf("a) %f\n", *p = y);		// *p ka�e na spr. x, zato spr. x dobi vrednost y, torej 10
	printf("b) %f\n", *p + 10);		// -||- spr. x in 10 se�tejemo, dobimo rezultat 20, vrednost x se ne spremeni
	printf("c) %ld\n", p = q);		// sedaj p ka�e na isto spr. kot q, ker q nismo inicializirali je lahko to katera koli vrednost
	//printf("�) %f\n", *p = *q);	// *p ka�e na spr. x, zato spr. x dobi vrednost na ketero ka�e *q, ker nismo dolo�ili kam q ka�e je to napaka
	printf("d) %ld\n", &q);			// izpi�emo naslov, na katerem se hrani kazalec q
	//printf("e) %f\n", *q = *p);	// *q ne ka�e na nobeno spr. zato ne moremo prenesti vrednosti iz x v spr. na katero ka�e *q
	printf("f) %f\n", q = p);		// sedaj tudi *q ka�e na spremenljivko na katero je kazal kazalec *p, torej x, dobimo vrednost naslova na katerem je shranjen x
	
	
	return 0;
}
