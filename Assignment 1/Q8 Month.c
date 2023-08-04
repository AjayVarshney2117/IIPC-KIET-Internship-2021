#include<stdio.h>

void main()
{
	const char *month[12] = {
		"January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November", "December"
	};
	
	int monthNumber;
	
	printf("Enter a month number : ");
	scanf("%d", &monthNumber);
	
	if(monthNumber<13 && monthNumber>0)
		printf("\nMonth Name : %s", month[monthNumber-1]);
	else
		printf("Wrong Input");
}

