#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main ()
{
	int A, B, C;
	
	while(scanf("%d %d %d", &A, &B, &C) != EOF)
	{
		if(B == C && B != A)
		{
			printf("A\n");
		}
		else if(A == C && A != B)
		{
			printf("B\n");
		}
		else if(A == B && A != C)
		{
			printf("C\n");
		}
		else if(A == B && A == C)
		printf("*\n");
	}
	
	return 0;
}
