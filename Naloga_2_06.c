#include <stdio.h>

int main()
{
	int x = 2, y = 2, z = 2;
	
	printf("%d %d %d\n", x += 1, y++, ++z);
	
	// samo ++x je enakovreden x += 1
	// saj najprej vrednost poveèamo, šele nato uporabimo (npr. izpišemo)
	
	return 0;
}
