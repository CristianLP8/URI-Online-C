#include<string.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int Senha;
	while(Senha != 2002)
	{
	scanf("%d", &Senha);
	if(Senha == 2002)
	printf("Acesso Permitido\n");
	else
	printf("Senha Invalida\n");
	}
	return 0;

}