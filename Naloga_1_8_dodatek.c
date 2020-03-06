#include <stdio.h>

int main()
{
	int i, a_st, a_im, b_st, b_im, c_st, c_im;
	
	printf("Oblika vnosa: 1/8 + 5/6\n");
	printf("Za razliko vnesi: 1/8 + -5/6\n");
	printf("Vnos: ");
	scanf("%d/%d + %d/%d", &a_st, &a_im, &b_st, &b_im);
	
	c_st = a_st*b_im + b_st*a_im;
	c_im = a_im * b_im;
	
	// brute force krajsanje
	for(i = (c_st < 0) ? -c_st : c_st; i > 0; i--){
		if(c_st % i == 0 && c_im % i == 0){
			c_st /= i;
			c_im /= i;
		}
	}
	
	// ce je imenovalec negativen ulomek spodaj in zgoraj pomnozimo z -1
	// resi vnos: 1/-4 + 1/8
	if( c_im < 0){
		c_im *= -1;
		c_st *= -1;
	}
	printf("Vsota: %d/%d", c_st, c_im);
	
	return 0;
}

