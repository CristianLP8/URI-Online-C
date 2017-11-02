#include<string.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int N, Numero;
	scanf("%d", &N);
	while(N > 0)
	{
		scanf("%d", &Numero);
		if(Numero%2 == 0 && Numero > 0)
		{
			printf("EVEN POSITIVE\n");
		}
		if(Numero%2 == 0 && Numero < 0)
		{
			printf("EVEN NEGATIVE\n");
		}
		if(Numero%2 != 0 && Numero > 0)
		{
			printf("ODD POSITIVE\n");
		}
		if(Numero%2 != 0 && Numero < 0)
		{
			printf("ODD NEGATIVE\n");
		}
		if(Numero == 0)
		{
			printf("NULL\n");
		}
		N--;
	}
	return 0;

}