#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	float X;
	
	scanf("%f", &X);
	
	if(X >= 0 && X <= 25.0000)
	{
		printf("Intervalo [0,25]\n");
	}
	if(X >= 25.00001 && X <= 50.0000000)
	{
		printf("Intervalo (25,50]\n");
	}
	if(X >= 50.00000001 && X <= 75.00000)
	{
		printf("Intervalo (50,75]\n");
	}
	if(X >= 75.00000001 && X <= 100)
	{
		printf("Intervalo (75,100]\n");
	}
	if(X < 0 || X > 100)
	{
		printf("Fora de intervalo\n");
	}
	return 0;
}