#include <stdio.h>

int main()
{
	int x = 2, y = 3, z = 4;
	
	printf("%d %d %d\n", x++, --y, ++z);
	printf("%d %d %d\n", x, y, z);
	
	// 2 2 5
	// 3 2 5
	// �e x++, najprej uporabi� vrednost (npr. jo izpi�e�), �ele nato jo pove�a�
	// �e ++x, najprej pove�a� in nato uporabi� �e spremenjeno vrednost
	
	return 0;
}
