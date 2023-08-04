#include<stdio.h>

typedef struct Student {
	char name[25];
	struct Date {
		int d;
		int m;
		int y;
	} d;
} Student;

void main()
{
	Student s;
	
	printf("Enter Name : "); scanf("%[^\n]s", s.name);
	printf("Enter DOB (dd mm yyyy) : "); scanf("%d %d %d", &s.d.d, &s.d.m, &s.d.y);
	
	printf("\n\nYou Entered");
	printf("\nName : %s", s.name);
	printf("\nDOB  : %d-%d-%d", s.d.d, s.d.m, s.d.y);
}
