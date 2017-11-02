#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main ()
{
	int a, b, c, d, inicio, final, duracao;

    scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	
	inicio = a*60 + b;
    final = c*60 + d;
    duracao = 0;
	
    if(a <= c){
        duracao = final - inicio;
        if(duracao == 0)
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",24,duracao%60);
        else
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(duracao - duracao%60)/60,duracao%60);
    }
	else
	{
        duracao = (24*60 - inicio) + final;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(duracao - duracao%60)/60,duracao%60);
    }
	
	return 0;
}