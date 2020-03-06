#include <stdio.h>

int main()
{
	float a, b;
	
	printf("Vnesi 2 realni (float) vrednosti loèeni z presledkom: ");
	scanf("%f%f", &a, &b);
	printf("%f\n", (a >= b) * a + (a < b) * b);
	
	// Komentar:
	// Program izpiše veèjo izmed obeh vnesenih števil.
	
	return 0;
}
