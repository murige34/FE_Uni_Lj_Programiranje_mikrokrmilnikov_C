#include <stdio.h>

int main()
{
	int x, y;
	
	printf("     |  x  |  y\n");
	printf("-----------------\n");
	
	// a
	x = 5; y = 2;	x %= y;
	printf("  a  |%3d  |%3d\n", x, y);
	// b
	x = 5; y = 2;	x = 1 + (y = 6);
	printf("  b  |%3d  |%3d\n", x, y);
	// c
	x = 5; y = 2;	x = 1 + (y == 6);
	printf("  c  |%3d  |%3d\n", x, y);
	// è
	x = 5; y = 2;	x + 2 - 3 * (y - 1);
	printf("  è  |%3d  |%3d\n", x, y);
	// d
	x = 5; y = 2;	x =- y;
	printf("  d  |%3d  |%3d\n", x, y);
	// e
	x = 5; y = 2;	//x =* y;
	// lahko uporabiš *=, z * drugaèe dostopaš do 
	printf("  e  |   Error \n");
	// f
	x = 5; y = 2;	x + --y;
	printf("  f  |%3d  |%3d\n", x, y);
	// g
	x = 5; y = 2;	//x + 1 = y;
	// na levi strani samo spremenljivka kamor shranjuješ!
	printf("  g  |   Error \n");
	// h
	x = 5; y = 2;	x > 1 || y == 13;
	printf("  h  |%3d  |%3d\n", x, y);
	// i
	x = 5; y = 2;	y = y / x;
	printf("  i  |%3d  |%3d\n", x, y);
	// j
	x = 5; y = 2;	y = 10 - 6 / 3 / 2;
	printf("  j  |%3d  |%3d\n", x, y);
	// k
	x = 5; y = 2;	x = y < 0 || y > 10;
	printf("  k  |%3d  |%3d\n", x, y);
	// l
	x = 5; y = 2;	//y = y && x -= 5;
	// && ima prednost pred -=, in nato ne more shraniti na lokacijo y && x
	printf("  l  |   Error \n");
	// m
	x = 5; y = 2;	y = y && (x -= 5);
	printf("  m  |%3d  |%3d\n", x, y);
	// n
	x = 5; y = 2;	x = 10 < x < 100;
	printf("  n  |%3d  |%3d\n", x, y);
	// o
	x = 5; y = 2;	x = x / 6 * 6;
	printf("  o  |%3d  |%3d\n", x, y);
	// p
	x = 5; y = 2;	x = (x != 5) < (y == 2);
	printf("  p  |%3d  |%3d\n", x, y);
	// r
	x = 5; y = 2;	x = 20 || y++;
	printf("  r  |%3d  |%3d\n", x, y);
	
	
	return 0;
}
