#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
	int V, T, Result;
	
	while(scanf("%d %d", &V, &T) != EOF)
	{
		T = T*2;
		Result = V*T;
		printf("%d\n", Result);
	}
	
	return 0;
}
