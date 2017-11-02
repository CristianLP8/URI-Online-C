#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	float A, B, C, Area, Perimetro;
	
	scanf("%f %f %f", &A, &B, &C);
	
	if((A < (B+C))&&(B < (A+C))&&(C < (A+B)))
	{
		Perimetro = A + B + C;
		printf("Perimetro = %.1f\n", Perimetro);
	}
	else
	{
		Area = (C*(A+B))/2;
		printf("Area = %.1f\n", Area);
	}
	
	return 0;
}
