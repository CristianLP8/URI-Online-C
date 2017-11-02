#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main ( )
{
	int X, Cont;
	scanf("%d", &X);
	for(Cont = 1; Cont <= X; Cont++)
		if(Cont%2 != 0)
		printf("%d\n", Cont);
	return 0;
}