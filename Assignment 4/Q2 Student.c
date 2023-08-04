#include<stdio.h>

struct student {
	char name[50];
	char rollno[13];
	char branch[3];
	char course[10];
};

void main()
{
	struct student s[10];
	int n, i;
	
	printf("Enter the size : ");
	scanf("%d", &n);
	
	printf("\nEnter the details :\n");
	for(i=0;i<n;i++)
	{
		printf("\n\nStudent %d", i+1);
		printf("\nEnter Name    : "); scanf("%s", s[i].name);
		printf("Enter Roll No : "); scanf("%s", s[i].rollno);
		printf("Enter Branch  : "); scanf("%s", s[i].branch);
		printf("Enter Course  : "); scanf("%s", s[i].course);
	}
	
	printf("\n\nYou Entered : ");
	for(i=0;i<n;i++)
	{
		printf("\n\nStudent %d", i+1);
		printf("\nName    : %s", s[i].name);
		printf("\nRoll No : %s", s[i].rollno);
		printf("\nBranch  : %s", s[i].branch);
		printf("\nCourse  : %s", s[i].course);
 	}
}
