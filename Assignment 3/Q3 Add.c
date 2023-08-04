#include<stdio.h>

void main()
{
	int n1, n2;
	int *p1 = &n1, *p2 = &n2;
	
	printf("Enter Number 1 : ");
	scanf("%d", p1);
	printf("Enter Number 2 : ");
	scanf("%d", p2);
	
	printf("%d + %d = %d", *p1, *p2, *p1 + *p2);
}
