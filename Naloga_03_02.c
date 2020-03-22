#include <stdio.h>

int main(void) {
	int n, fakt = 1;
	for (n = 1; n <= 5; n++){
		fakt *= n;
		printf("%d! = %d\n", n, fakt);
	}
	
	// Odgovor:
	// Ker so manjkali zaviti oklepaji smo dobili samo izpis (6! = 120), saj se je najprej
	// izvedla for zanka, šele ko se je zanka konèala je prišel na vrsto stavek za izpis printf.
	return 0;
}
