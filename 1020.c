#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	int IdadeDias, Anos, Meses, Dias;
	scanf("%i", &IdadeDias);
	Anos = (IdadeDias/365);
	Meses = ((IdadeDias-(Anos*365))/30);
	Dias = (IdadeDias-(Anos*365)-(Meses*30));
	printf("%i ano(s)\n%i mes(es)\n%i dia(s)\n", Anos, Meses, Dias);
	return 0;
}
