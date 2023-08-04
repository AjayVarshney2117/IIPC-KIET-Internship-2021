#include<stdio.h>

typedef struct employee {
	char name[25];
	unsigned int gender : 1;
	unsigned int marital : 1;
	char id[5];
}employee;

void main()
{
	employee e;
	int i;
	
	printf("Enter Name : "); scanf("%[^\n]s", e.name);
	printf("Enter ID : "); scanf("%s", e.id);
	printf("1 for Male 0 for Female\n");
	printf("Enter Gender : "); scanf("%d", &i);
	e.gender = i;
	printf("1 for Married 0 for Not Married\n");
	printf("Enter Marital Status : "); scanf("%d", &i);
	e.marital = i;
	
	printf("\n\nYou Entered :\n");
	printf("\nName           : %s", e.name);
	printf("\nID             : %s", e.id);
	printf("\nGender         : %d", e.gender);
	printf("\nMarital Status : %d", e.marital);
}
