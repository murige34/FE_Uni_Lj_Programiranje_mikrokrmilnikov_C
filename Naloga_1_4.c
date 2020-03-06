#include <stdio.h>

int main()
{
	float x;
	
	printf("Vnesi realno vrednost: ");
	// pri scanf pred ime spr. dodaj &
	//(scanf potrebuje lokacijo spr. v pomnilniku, do katere prides z & pred imenom)
	// v scanf NI besedila, ga das v printf stavek, prav tako ni \n !!!
	scanf("%f", &x);
	printf("%11.2f\n", x);
	printf("%06.0f-----%.3f\n", x, x);
	printf("\"%.3f\"\n", x*10);
	
	return 0;
}

