#include<stdio.h>

void main()
{
	int n=10;
	int i,j,k;
	int s = (n+(n-1)-1)/2;
	
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=s;k++)
			printf(" ");
		s--;
		
		for(j=i;j>0;j--)
			printf("* ");
		
		printf("\n");
	}
}
