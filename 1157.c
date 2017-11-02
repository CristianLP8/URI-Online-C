#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
int main ()
{
	int N, Cont=1;
	scanf("%d", &N);
	while(Cont <= N)
	{
		if((N%Cont) == 0)
		{
			printf("%d\n", Cont);
		}
		Cont++;
	}
	return 0;
}