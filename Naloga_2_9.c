#include <stdio.h>

int main()
{
	int i, x_start, x_stop, y_start, y_stop;
	
	printf("Obmo�je za izpis: ");
	scanf("%d %d", &x_start, &x_stop);
	printf("Ozna�i vrednosti: ");
	scanf("%d %d", &y_start, &y_stop);
	
	for(i = x_start; i <= x_stop; i++ ){
		if( y_start <= i && i <= y_stop ){
			printf("*");
		}
		printf("%d ", i);
	}
	
	return 0;
}
