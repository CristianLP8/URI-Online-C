#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
int main ()
{
    int N, Ri, X = 0, Y = 0;
	scanf("%d", &N);
	while(N != 0)
	{
		while(N > 0)
		{
			scanf("%d", &Ri);
			if(Ri == 0)
			{
				X++;
			}
			else
			{
				Y++;
			}
			N--;
		}
		scanf("%d", &N);
		printf("Mary won %d times and John won %d times\n", X, Y);
		X = 0;
		Y = 0;
	}
	
    return 0;
}