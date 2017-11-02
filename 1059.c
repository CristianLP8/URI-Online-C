#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int Cont;
	for (Cont = 0; Cont <= 100; Cont++)
	{
		if(Cont%2 == 0 && Cont > 0)
		printf("%d\n", Cont);
	}
	return 0;
}
