#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main ()
{
	double Area,Pi, Raio;
	Pi = 3.14159;
	scanf("%lf", &Raio);
	Area = Pi*(Raio*Raio);
	printf("A=%.4lf\n", Area);
	return 0;
}