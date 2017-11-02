#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	int NumeroEmpregado, HorasTrabalhadas; 
	float ValorHora, SalarioFinal;
	scanf ("%i", &NumeroEmpregado);
	scanf ("%i", &HorasTrabalhadas);
	scanf ("%f", &ValorHora);
	SalarioFinal = (HorasTrabalhadas * ValorHora);
	printf ("NUMBER = %i\n", NumeroEmpregado);
	printf ("SALARY = U$ %.2f\n", SalarioFinal);
	return 0;
}