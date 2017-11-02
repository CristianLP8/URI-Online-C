#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	float Numeros[6];
	int Positivos=0, Cont;
	
	for (Cont = 0; Cont < 6; Cont++)
	{
		scanf("%f", &Numeros[Cont]);
		if(Numeros[Cont] > 0)
		{
			Positivos = Positivos+1;
		}
	}
	
	printf("%d valores positivos\n", Positivos);
	return 0;
}
