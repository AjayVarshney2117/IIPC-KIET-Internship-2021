#include<stdio.h>

void main()
{
	int a, b, temp;
	
	printf("Enter the following :\n");
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);
	
	SwapWith(&a,&b);
	
	printf("\nSwapping with using third variable:\n");
	printf("a = %d\n", a);
	printf("b = %d", b);
	
	SwapWithout(&a,&b);
	
	printf("\n\nSwapping without using third variable :\n");
	printf("a = %d\n", a);
	printf("b = %d", b);
}

void SwapWith(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

void SwapWithout(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

