#include<string.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int main ()
{
	float A, B, C, Media;
	
	scanf("%f", &A);
	scanf("%f", &B);
	scanf("%f", &C);
	
	A = A*2;
	B = B*3;
	C = C*5;
	
	Media = (A+B+C)/10;
	
	printf("MEDIA = %.1f\n", Media);
	
	return 0;
}
