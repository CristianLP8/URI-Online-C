#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int N, X, Y;
	float Div;
	scanf("%d", &N);
	while(N > 0)
	{
		scanf("%d %d", &X, &Y);
		if(Y == 0)
			printf("divisao impossivel\n");
		else
		{
			Div = ((float)X)/((float)Y);
			printf("%.1f\n", Div);
		}
		N--;
	}
	return 0;
}