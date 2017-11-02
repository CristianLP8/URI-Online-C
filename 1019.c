#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	int N, horas, minutos, segundos;
	scanf("%i", &N);
	horas = (N/3600);
	minutos = ((N-(horas*3600))/60);
	segundos = (N-(horas*3600)-(minutos*60));
	printf("%i:%i:%i\n", horas, minutos, segundos);
	return 0;
}
