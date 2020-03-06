#include <stdio.h>

#define PALEC_CENTIMETROV 2.54

int main()
{
	float dolzina;
	
	printf("Vnesi dolzino v palcih: ");
	// pri scanf pred ime spr. dodaj &
	//(scanf potrebuje lokacijo spr. v pomnilniku, do katere prides z & pred imenom)
	// v scanf NI besedila, ga das v printf stavek, prav tako ni \n !!!
	scanf("%f", &dolzina);
	dolzina *= PALEC_CENTIMETROV;
	printf("Vnešena dolžina znaša %.2f cm.\n", dolzina);
	
	return 0;
}

