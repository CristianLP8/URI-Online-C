#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	int N, V100, V50, V20, V10, V5, V2, V1;
	scanf("%i", &N);
	V100 = (N/100);
	V50 = ((N-(V100*100))/50);
	V20 = ((N-(V100*100)-(V50*50))/20);
	V10 = ((N-(V100*100)-(V50*50)-V20*20)/10);
	V5 = ((N-(V100*100)-(V50*50)-(V20*20)-(V10*10))/5);
	V2 = ((N-(V100*100)-(V50*50)-(V20*20)-(V10*10)-(V5*5))/2);
	V1 = ((N-(V100*100)-(V50*50)-(V20*20)-(V10*10)-(V5*5)-(V2*2))/1);
	printf("%i\n%i nota(s) de R$ 100,00\n%i nota(s) de R$ 50,00\n%i nota(s) de R$ 20,00\n%i nota(s) de R$ 10,00\n%i nota(s) de R$ 5,00\n%i nota(s) de R$ 2,00\n%i nota(s) de R$ 1,00\n", N, V100, V50, V20, V10, V5, V2, V1);
	return 0;
}
