#include<stdio.h>

void main()
{
	int a, b, temp;
	
	printf("Enter the following :\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("\nAfter Swapping :\n");
	printf("a = %d\n", a);
	printf("b = %d", b);
}

