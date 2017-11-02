#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

int insercao(int Vetor[49], int Tam) 
{    
  int C, X, aux, Trocas; 
  Trocas = 0;
  for(C = 1; C < Tam; C++)
  { 
    X = C; 
	while((X != 0) && (Vetor[X] < Vetor[X - 1])) 
	{ 
		aux = Vetor[X]; 
		Vetor[X] = Vetor[X - 1]; 
		Vetor[X - 1] = aux; 
		X--;
		Trocas++;
    } 
  }
  return Trocas;	
}



int main()
{
	int N, L, Trem[49], C, Troc;
	
	scanf("%d", &N);
	while(N != 0)
	{
		scanf("%d", &L);
		for (C = 0; C <= 49; C++)
		Trem[C] = '\0';
		
		for (C = 0; C < L; C++)
		scanf("%d", &Trem[C]);
		
		Troc = insercao(Trem, L);
		
		printf("Optimal train swapping takes %d swaps.\n", Troc);
		N--;
	}
}