/* ---------------- Programiranje C ---------------------
// Programiranje mikrokrmilnikov, demonstrator 2019/2020
// Programiranje II, demonstrator 2019/2020
// Martin Urigelj
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, *k = &x;
	
	x = 10;	k = &x;	k++;		printf("a) x = %d\n", x);
	x = 10;	k = &x;	*k++;		printf("b) x = %d\n", x);
	x = 10;	k = &x;	(*k)++;		printf("c) x = %d\n", x);
	//x = 10;	k = &x;	(&k)++;		printf("è) x = %d\n", x);
	x = 10;	k = &x;	*k *= 20;	printf("d) x = %d\n", x);
	x = 10;	k = &x;	k = &x;		printf("e) x = %d\n", x);
	x = 10;	k = &x;	*k + 1;		printf("f) x = %d\n", x);
	
	return 0;
}
