#include<stdio.h>

void main()
{
	const int n = 10;
	int *p = &n;
	
	printf("Value of n : %d", *p);
	
	*p = 12;
	
	printf("\nValue of n : %d", *p);
}
