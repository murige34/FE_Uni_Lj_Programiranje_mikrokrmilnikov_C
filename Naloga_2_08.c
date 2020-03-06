#include <stdio.h>

int main()
{
	int x, y, z;
	printf("x  y  z   (x && y || z)   (x && (y || z))\n");
	printf("-----------------------------------------\n");
	
	for(x = 0; x < 2; x++){
		for(y = 0; y < 2; y++){
			for(z = 0; z < 2; z++){
				printf("%d%3d%3d%15d%18d\n", x, y, z, (x && y || z), (x && (y || z)));
			}
		}
	}
	
	return 0;
}
