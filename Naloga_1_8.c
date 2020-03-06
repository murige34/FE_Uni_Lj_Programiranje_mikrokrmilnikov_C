#include <stdio.h>
#include <math.h>

int main()
{
	int a_st, a_im, b_st, b_im, c_st, c_im;
	
	printf("Vnesi 2 ulomka v obliki: 1/8\n");
	printf("Prvi ulomek: ");
	scanf("%d/%d", &a_st, &a_im);
	printf("Drugi ulomek: ");
	scanf("%d/%d", &b_st, &b_im);
	
	c_st = a_st*b_im + b_st*a_im;
	c_im = a_im * b_im;
	
	printf("Vsota: %d/%d", c_st, c_im);
	
	return 0;
}

