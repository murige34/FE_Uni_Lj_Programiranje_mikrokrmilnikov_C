#include <stdio.h>

int main()
{
	int i, x, pozitivne = 0;
	
	printf("Vnesi 10 celo�tevilskih vrednosti: ");
	for(i=0; i < 10; i++){
		scanf("%d", &x);
		(x > 0) && pozitivne++;
	}
	printf("Vnesli ste %d pozitivnih �tevil.", pozitivne);
	
	return 0;
}
