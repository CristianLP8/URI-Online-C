#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>   
int main()
{
	int a, b, c, a2, b2, c2;
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	if (a < b)                                           
		if (b < c)
		{
			printf("%d\n", a);
			printf("%d\n", b);
			printf("%d\n", c);
		}       
        else if (a < c) 
		{
			printf("%d\n", a);
			printf("%d\n", c);
			printf("%d\n", b);
		}   
        else 
		{
			printf("%d\n", c);
			printf("%d\n", a);
			printf("%d\n", b);
		}         
        else if (b < c)                                       
			if (a < c) 
			{
				printf("%d\n", b);
				printf("%d\n", a);
				printf("%d\n", c); 
			}  
            else 
			{
				printf("%d\n", b);
				printf("%d\n", c);
				printf("%d\n", a);
			}        
            else 
		    {
				printf("%d\n", c);
				printf("%d\n", b);
				printf("%d\n", a); 
			}   
				
	a2 = a;
	b2 = b;
	c2 = c;
				
	printf("\n");
	printf("%d\n", a2);
	printf("%d\n", b2);
	printf("%d\n", c2);
				
	return 0;
}