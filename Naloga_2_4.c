#include <stdio.h>

int main()
{
	int x = 2, y = 3, z = 4;
	
	printf("%d %d %d\n", x++, --y, ++z);
	printf("%d %d %d\n", x, y, z);
	
	// 2 2 5
	// 3 2 5
	// èe x++, najprej uporabiš vrednost (npr. jo izpišeš), šele nato jo poveèaš
	// èe ++x, najprej poveèaš in nato uporabiš že spremenjeno vrednost
	
	return 0;
}
