#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main ()
{
	char Nome[50];
	double SalarioFixo, TotalVendas, Comissao, SalarioTotal;
	scanf("%s", Nome);
	scanf("%lf", &SalarioFixo);
	scanf("%lf", &TotalVendas);
	Comissao = (TotalVendas*0.15);
	SalarioTotal = SalarioFixo+Comissao;
	printf("TOTAL = R$ %.2lf\n", SalarioTotal);
	return 0;
}