#include<stdio.h>

void main()
{
	int number, power, i;
	long int result=1;
	
	printf("Enter a number : ");
	scanf("%d", &number);
	
	printf("To which power : ");
	scanf("%d", &power);
	
	for(i=0;i<power;i++)
		result *= number;
		
	printf("\n%d^%d = %d", number, power, result);
}
