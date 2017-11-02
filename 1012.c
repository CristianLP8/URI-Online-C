#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	float A, B, C, Triangulo, Circulo, Trapezio, Quadrado, Retangulo;
	scanf ("%f %f %f", &A, &B, &C);
	Triangulo = A*C/2;
	Circulo = (C*C)*3.14159;
	Trapezio = ((A+B)*C)/2;
	Quadrado = B*B;
	Retangulo = A*B;
	printf("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", Triangulo, Circulo, Trapezio, Quadrado, Retangulo);
	return 0;
}