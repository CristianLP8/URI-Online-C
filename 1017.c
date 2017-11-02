#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	int Tempo, Velocidade;
	float Distancia, Combustivel;
	scanf("%i", &Tempo);
	scanf("%i", &Velocidade);
	Distancia = Tempo*Velocidade;
	Combustivel = Distancia/12;
	printf("%.3f\n", Combustivel);
	
	return 0;
}