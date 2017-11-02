#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int main()
{
	float N1, N2, N3, N4, Exame, MediaFinal;
	
	scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
	MediaFinal = ((2*N1)+(3*N2)+(4*N3)+(N4))/10;
	printf("Media: %.1f\n", MediaFinal);
	
	if(MediaFinal < 5.0)
	{
		printf("Aluno reprovado.\n");
	}
	else if(MediaFinal >= 5.0 && MediaFinal <=6.9)
	{
		printf("Aluno em exame.\n");
		scanf("%f", &Exame);
		printf("Nota do exame: %.1f\n", Exame);
		MediaFinal = (MediaFinal + Exame)/2.0;
		if(MediaFinal > 5.0)
		{
			printf("Aluno aprovado.\n");
			printf("Media final: %.1f\n", MediaFinal);
		}
		else
		{
			printf("Aluno reprovado.\n");
			printf("Media final: %.1f\n", MediaFinal);
		}
	}
	else if(MediaFinal >= 7.0)
	{
		printf("Aluno aprovado.\n");
	}
	return 0;
}