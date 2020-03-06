#include <stdio.h>

int main()
{
	int x;
	
	x = 0;
	printf("Velja 2 < x < 5, èe je x=%d? %d\n", x, (2 < x && x < 5) );
	x = 3;
	printf("Velja 2 < x < 5, èe je x=%d? %d\n", x, (2 < x && x < 5) );
	x = 6;
	printf("Velja 2 < x < 5, èe je x=%d? %d\n", x, (2 < x && x < 5) );
	
	// Pojasnilo:
	// ce napises pogoj kot: 2 < x < 5 je rezultat vedno 1, ker:
	// najprej se preveri ali je x vecji od 2 in rezultat te operacije je 0 ali 1
	// 0 ali 1 pa je vedno manjše od 5 in posledièno vedno dobimo za rezultat 1
	
	return 0;
}

