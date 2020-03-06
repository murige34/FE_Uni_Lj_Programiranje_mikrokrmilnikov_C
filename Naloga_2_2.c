#include <stdio.h>

int main()
{
	int x, y;
	printf("x  y   (x && y)  (x || y)   (!x)\n");
	printf("--------------------------------\n");
	
	for(x = 0; x < 2; x++){
		for(y = 0; y < 2; y++){
			printf("%d%3d%10d%10d%7d\n", x, y, x&&y, x||y, !x);
		}
	}
	
	return 0;
}
