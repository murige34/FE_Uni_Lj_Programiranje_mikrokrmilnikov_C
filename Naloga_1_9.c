#include <stdio.h>

int main()
{	
	int i = 0, x, sum = 0;
	
	while(i < 5){
		
		printf("Vnesi pet celih števil locenih z presledkom: ");
	
		for (i = 0; i < 5; i = i + 1){
			if (scanf("%d", &x) == 1) {
				sum += x;
			}
			else{
				printf("Napaèen vnos.\n");
				// pocistis vhodni buffer (se neprebrane znake)
				while (getchar() != '\n') {}
				break;
			}
		}
	}
	
	printf("Vsota: %d\n", sum);
	
	return 0;
}

