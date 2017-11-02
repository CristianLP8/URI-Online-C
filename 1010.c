#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main ()
{
	int Cod1, Cod2, Unidade1, Unidade2;
	float Valor1, Valor2, Total;
	scanf("%i %i %f", &Cod1, &Unidade1, &Valor1);
	scanf("%i %i %f", &Cod2, &Unidade2, &Valor2);
	Total = ((Unidade1*Valor1) + (Unidade2*Valor2));
	printf("VALOR A PAGAR: R$ %.2f\n", Total);
	
return 0;
}