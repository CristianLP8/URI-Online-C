#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int N, Cont, Result;
	scanf("%d", &N);
	for (Cont = 1; Cont <= 10; Cont++)
	{
		Result = N*Cont;
		printf("%d x %d = %d\n", Cont, N, Result);
	}
	return 0;
}
