#include<stdio.h>

void main()
{
    int i, n, j;
    
    printf("Enter a number : ");
    scanf("%d", &n);
    
	for(i=n;i>0;i--)
	{
	   for(j=0;j<i;j++)
	       printf("*");
	   printf("\n");
	}
}