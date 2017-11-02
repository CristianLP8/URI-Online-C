#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
	int R;
	double Volume;
	
	scanf("%d", &R);
	
	Volume = ((4/3.0)*(3.14159)*pow(R,3));
	
	printf("VOLUME = %.3lf\n", Volume);
	return 0;
}