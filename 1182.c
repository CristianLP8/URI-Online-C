#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
int main ()
{
    int C, Lin, Col;
    float M[12][12], Soma = 0, Media = 0;
    char T;
     
    scanf("%d", &C);
    getchar();
	T = getchar();
     
    for(Lin = 0; Lin < 12; Lin++)
        for(Col = 0; Col < 12; Col++)
    {
        scanf("%f", &M[Lin][Col]);
    }
     
    for(Lin = 0; Lin < 12; Lin++)
    {
        Soma = Soma + (M[Lin][C]);
    }
    Media = Soma/12;
     
    if(T == 'M')
        printf("%.1f\n", Media);
    else if(T == 'S')
        printf("%.1f\n", Soma);
     
    return 0;
}