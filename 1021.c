#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
	double N;
	int CCem, CCin, CVin, CDez, CCinc, CDoi, MUm, MCin, MVinCin, MDez, MCinC, MUmC;
	
	scanf("%lf", &N);
	CCem = N/100.00;
	N = N - (CCem*100);
	
	CCin = N/50.00;
	N = N - (CCin*50);
	
	CVin = N/20.00;
	N = N - (CVin*20);
	
	CDez = N/10.00;
	N = N - (CDez*10);
	
	CCinc = N/5.00;
	N = N - (CCinc*5);
	
	CDoi = N/2.00;
	N = N - (CDoi*2);
	
	MUm = N/1.00;
	N = N - MUm;
	
	MCin = N/0.50;
	N = N - (MCin*0.50);
	
	MVinCin = N/0.25;
	N = N - (MVinCin*0.25);
	
	MDez = N/0.10;
	N = N - (MDez*0.10);
	
	MCinC = N/0.05;
	N = N - (MCinC*0.05);
	
	MUmC = N/0.01;
	N = N - (MUmC*0.01);
	printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", CCem, CCin, CVin, CDez, CCinc, CDoi, MUm, MCin, MVinCin, MDez, MCinC, MUmC);
	
	return 0;
}