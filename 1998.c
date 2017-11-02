#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main ()
{
	long long int X, Y, Dif;
	
	while(scanf("%lld %lld", &X, &Y) != EOF)
	{
		if(X > Y)
		{
			Dif = X - Y;
			printf("%lld\n", Dif);
		}
		else
		{
			Dif = Y - X;
			printf("%lld\n", Dif);
		}
	}
	
	
	return 0;
}