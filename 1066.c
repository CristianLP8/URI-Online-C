#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int Num[5], Cont, Pos = 0, Neg = 0, Par = 0, Imp = 0;
	
	for (Cont = 0; Cont < 5; Cont ++)
	{
		scanf("%d", &Num[Cont]);
		if (Num[Cont] > 0)
			Pos++;
		else if (Num[Cont] < 0)
			Neg++;
		if (Num[Cont] % 2 == 0)
			Par++;
		else
			Imp++;
	}
	
	
	printf("%d valor(es) par(es)\n", Par);
	printf("%d valor(es) impar(es)\n", Imp);
	printf("%d valor(es) positivo(s)\n", Pos);
	printf("%d valor(es) negativo(s)\n", Neg);
 return 0;
 }