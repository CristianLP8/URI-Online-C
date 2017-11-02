#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	int A, B, C;
	scanf ("%i %i %i", &A, &B, &C);
	if (A > B && A > C)
		printf ("%i eh o maior\n", A ); 
	if (B > A && B > C)
		printf ("%i eh o maior\n", B);
	if (C > A && C > B)
		printf ("%i eh o maior\n", C );
	return 0;
}