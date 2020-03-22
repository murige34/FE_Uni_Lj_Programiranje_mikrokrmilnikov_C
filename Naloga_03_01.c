#include <stdio.h>

int main(void) {
	int a = 1, b = 2, c = 3;
	if (a > b)
		a++;
		c++;
	//else
	//	b++;
	printf("%d %d %d", a, b, c);
	return 0;
	
	// Odgovor:
	// Program se ne prevede, saj else stavek ne ve kateremu if stavku pripada.
	// To bi lahko rešili z zavitimi oklepaji, brez njih moramo odstraniti a++; ali c++;.
	
	// Odgovor 2:
	// Èe odstranimo (else b++;) se program prevede. Zavedati se moramo, da sedaj k if stavku
	// spada samo prvi naslednji stavek (tj. a++;), (c++;) se izvede vedno. (izpiše se: 1 2 4)
}
