#include<string.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>

int mdc(int a,int b) 
{  
 if(b == 0)  
  return a;  
 else  
  return mdc(b,a%b); 
} 

int main()
{
	int F1, F2, Cont, N;
	
	scanf("%d", &N);
	for(Cont = 0; Cont < N; Cont++)
	{
		scanf("%d %d", &F1, &F2);
		printf("%d\n",mdc(F1,F2));
	}
} 
