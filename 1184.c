#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
int main ()
{
    int Lin, Col, Cont = 0;
    float M[12][12], Soma = 0, Media = 0;
    char O;
     
    scanf(" %c", &O);
     
    for(Lin = 0; Lin < 12; Lin++)
        for(Col = 0; Col < 12; Col++)
    {
        scanf("%f", &M[Lin][Col]);
    }
     
	if(O == 'M')
	{
		for(Col = 0; Col < 12; Col++)
			for(Lin = (Col+1); Lin < 12; Lin++)
		{
				Soma += (M[Lin][Col]);	
		}
		Media = Soma/66;
		printf("%.1f\n", Media);
	}
	
	if (O == 'S')
		{
		for(Col = 0; Col < 12; Col++)
			for(Lin = (Col+1); Lin < 12; Lin++)
		{
				Soma += (M[Lin][Col]);		
		}
		printf("%.1f\n", Soma);
	}
    	
    return 0;
}