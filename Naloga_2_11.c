#include <stdio.h>

int main()
{
	float a, b;
	
	printf("Vnesi 2 realni (float) vrednosti lo�eni z presledkom: ");
	scanf("%f%f", &a, &b);
	printf("%f\n", (a >= b) * a + (a < b) * b);
	
	// Komentar:
	// Program izpi�e ve�jo izmed obeh vnesenih �tevil.
	
	return 0;
}
