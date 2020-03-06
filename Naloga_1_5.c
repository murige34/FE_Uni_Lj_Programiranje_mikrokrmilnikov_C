#include <stdio.h>

int main()
{
	int znesek;
	
	printf("Vnesi celoštevilski znesek v evrih: ");
	// pri scanf pred ime spr. dodaj &
	//(scanf potrebuje lokacijo spr. v pomnilniku, do katere prides z & pred imenom)
	// v scanf NI besedila, ga das v printf stavek, prav tako ni \n !!!
	scanf("%d", &znesek);
	printf("Izplaèilo:\n-------------------\n");
	printf("Nominala Št. enot\n   (EUR)\n");
	printf("-------------------\n");
	
	printf("%8d%4d\n", 200, znesek/200);  znesek %= 200;
	printf("%8d%4d\n", 50, znesek/50);    znesek %= 50;
	printf("%8d%4d\n", 20, znesek/20);    znesek %= 20;
	printf("%8d%4d\n", 10, znesek/10);	znesek %= 10;
	printf("%8d%4d\n", 5, znesek/5);	znesek %= 5;
	printf("%8d%4d\n", 2, znesek/2);	znesek %= 2;
	printf("%8d%4d\n", 1, znesek);
	
	return 0;
}

