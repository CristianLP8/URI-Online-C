#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main ()
{
	int n;
 
    while(scanf("%d\n",&n)!=EOF){
        if(n==0){
            printf("vai ter copa!\n");
        }
        else{
             printf ("vai ter duas!\n");
        }
    }
	
	return 0;
}