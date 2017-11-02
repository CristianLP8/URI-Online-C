#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
	double a, b, c, delta, R1, R2;
	scanf("%lf %lf %lf", &a, &b, &c);	
	
	delta = (pow(b,2)-(4*a*c));
	
	if(delta < 0 || a == 0)
	{
		printf("Impossivel calcular\n");
	}
	else
	{
		R1 = ((-b)+(sqrt(delta)))/(2*a);
		R2 = ((-b)-(sqrt(delta)))/(2*a);
		
		printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
	}
	return 0;
}