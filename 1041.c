#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
	float X, Y;
	
	scanf("%f %f", &X, &Y);
	
	if(X == 0 && Y == 0)
	{
		printf("Origem\n");
	}
	if(X > 0 && Y > 0)
	{
		printf("Q1\n");
	}
	if(X < 0 && Y > 0)
	{
		printf("Q2\n");
	}
	if(X < 0 && Y < 0)
	{
		printf("Q3\n");
	}
	if(X > 0 && Y < 0)
	{
		printf("Q4\n");
	}
	if(X==0 && Y!=0)
	{
		printf("Eixo Y\n");
	}
	if(X!=0 && Y==0)
	{
		printf("Eixo X\n");
	}
	
	return 0;
}