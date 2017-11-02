#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{	
	int X, Y, Impar=0, Cont;
	
	scanf("%d", &X);
	scanf("%d", &Y);
	
	if(X > Y)
	{
		for(Cont = (Y+1); Cont < X; Cont++)
		{
			if(Cont%2 != 0)
			{
				Impar = Impar + Cont;
			}
		}
	}
	if(Y > X)
	{
		for(Cont = (X+1); Cont < Y; Cont++)
		{
			if(Cont%2 != 0)
			{
				Impar = Impar + Cont;
			}
		}
	}
	
	printf("%d\n", Impar);
	
	return 0;
}
