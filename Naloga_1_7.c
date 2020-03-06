#include <stdio.h>
#include <math.h>

int main()
{
	int st;
	float rad;
	
	printf("x (st)  x (rad)  sin(x)  cos(x)\n");
	printf("-------------------------------\n");
	for(st = 0; st <= 180; st += 30){
		rad = st*M_PI/180;
		printf("%5d%9.3f%8.2f%8.2f\n", st, rad, sin(rad), cos(rad));
	}
	
	return 0;
}

