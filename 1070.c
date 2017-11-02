#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main ( )
{
	int X, Cont, Y;
	scanf("%d", &X);
	Y = (X+12);
	for(Cont = X; Cont <= Y; Cont++)
	{
		if(Cont%2 != 0)
			printf("%d\n", Cont);
	}
}