#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{	
	int N, Cont, In=0, Out=0, X;
	
	scanf("%d", &N);
	
	if(N < 10000)
	{
			for(Cont = 0; Cont < N; Cont++)
		{
			scanf("%d", &X);
			if(((X > -1000000) && (X < 1000000)))
				if((X >= 10) && (X <= 20))
				{
					In = In+1;
				}
				else
				{
					Out = Out+1;
				}
		}
	}
	
	printf("%i in\n", In);
	printf("%i out\n", Out);
	
	return 0;
}