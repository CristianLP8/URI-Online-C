#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	int X;
	float Y, Total;
	scanf("%i", &X);
	scanf("%f", &Y);
	Total = X/Y;
	printf("%.3f km/l\n", Total);
	return 0;
}