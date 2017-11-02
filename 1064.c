#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	float Numeros[6], Media;
	int Cont, Positivos=0;
	
	for (Cont = 0; Cont < 6; Cont++)
	{
		scanf("%f", &Numeros[Cont]);
		if(Numeros[Cont] > 0)
		{
			Positivos = Positivos+1;
			Media = Media + Numeros[Cont];
		}
	}
	
	Media = Media/Positivos;;
	printf("%d valores positivos\n", Positivos);
	printf("%.1f\n", Media);
	return 0;
}
