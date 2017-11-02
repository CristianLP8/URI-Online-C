#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int X, Y;
	do
	{
		scanf("%d %d", &X, &Y);
		if(X > Y && X != Y)
			printf("Decrescente\n");
		else if(X <	 Y && X != Y)
			printf("Crescente\n");
	}while(X != Y);
	return 0;
}
