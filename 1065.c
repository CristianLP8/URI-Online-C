#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int Cont, Numero, Par=0;
	for(Cont = 0; Cont < 5; Cont++)
	{
		scanf("%d", &Numero);
		if (Numero%2 != 0)
			Par = Par+0;
		else
			Par = Par+1;
	}
	printf("%d valores pares\n", Par);
	return 0;
}