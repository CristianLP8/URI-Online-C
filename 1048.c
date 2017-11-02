#include<math.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main ()
{
	float Salario, Aumento, NovoSal, Porcentagem;
	int Porc;
	scanf("%f", &Salario);
	if(Salario >= 0 && Salario <= 400.00)
	{
		Porcentagem = 0.15;
		Porc = 15;
	}
	if(Salario >= 400.01 && Salario <= 800.00)
	{
		Porcentagem = 0.12;
		Porc = 12;
	}
	if(Salario >= 800.01 && Salario <= 1200.00)
	{
		Porcentagem = 0.10;
		Porc = 10;
	}
	if(Salario >= 1200.01 && Salario <= 2000.00)
	{
		Porcentagem = 0.07;
		Porc = 7;
	}
	if(Salario >= 2000.01)
	{
		Porcentagem = 0.04;
		Porc = 4;
	}
	
	Aumento = Salario*Porcentagem;
	NovoSal = Salario+Aumento; 
	Porcentagem = Porcentagem*100;
	
	printf("Novo salario: %.2f\n", NovoSal);
	printf("Reajuste ganho: %.2f\n", Aumento);
	printf("Em percentual: %i %%\n", Porc);
	
	return 0;
}