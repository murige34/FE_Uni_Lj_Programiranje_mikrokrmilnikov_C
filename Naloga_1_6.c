#include <stdio.h>

int main()
{
	int leto, mesec, dan;
	
	printf("Vnesi datum v zapisu ISO 8601: ");
	scanf("%d-%d-%d", &leto, &mesec, &dan);
	printf("Pretvorjen zapis: %2d.%2d.%5d", dan, mesec, leto);
	
	return 0;
}

