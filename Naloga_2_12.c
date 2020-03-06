#include <stdio.h>
#include <stdlib.h> // rand in srand
#include <time.h>   // time

int main()
{
	int i;
	
	//Klièemo samo enkrat in to pred prvim klicem funkcije rand
	srand(time(NULL));
	
	printf("Program za generacijo 10 nakljuènih števil med 1 - 6.\n");
	printf("(simulacij 10 metov igralne kocke)\n");
	
	for(i = 0; i < 10; i++){
		printf("%d, ", (rand() % 6) + 1 );
	}
	
	return 0;
}
