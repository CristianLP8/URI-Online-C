#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
 
int main ()
{
    int Distancia, Tempo;

    scanf("%i", &Distancia);

    Tempo = (60 * Distancia) / 30;

    printf("%i minutos\n", Tempo);

    return 0;
}