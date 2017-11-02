#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
 
int main ()
{
    int x1, x2, y1, y2;
    float Distancia;

    scanf("%i %i", &x1, &y1);
    scanf("%i %i", &x2, &y2);

    Distancia = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    printf("%.4f\n", Distancia);

    return 0;
}