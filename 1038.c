#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int Quantidade, Lanche;
	float Valor;
	scanf("%d %d", &Lanche, &Quantidade);
	switch (Lanche)
	{
	case 1:
		Valor = 4;
		break;
	case 2:
		Valor = 4.50;
		break;
	case 3:
		Valor = 5;
		break;
	case 4:
		Valor = 2;
		break;
	case 5:
		Valor = 1.50;
		break;	
	default:
		break;
	}
	
	Valor = Valor*Quantidade;
	
	printf("Total: R$ %.2f\n", Valor);
	return 0;
}