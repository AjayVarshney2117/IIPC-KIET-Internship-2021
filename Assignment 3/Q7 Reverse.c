#include<stdio.h>
#include<conio.h>
#include<string.h>

void menu();
void WithoutRecursion(int,char*);
void WithRecursion(int,char*,int);

void main()
{
	menu();
}

void menu()
{
	char name[100];
	char *pname = name;
	int len, x;
	
	printf("Enter a Word : ");
	scanf("%s", pname);
	
	len = strlen(name);
	
	system("cls");
	
	printf("******CHOOSE ONE******");
	printf("\n1. Without Recursion");
	printf("\n2. With Recursion");
	
	x = getch();
	system("cls");
	
	printf("Reverse String is...\n");
	
	switch(x)
	{
		case '1':
			WithoutRecursion(len,pname);
			break;
		case '2':
			WithRecursion(len,pname,0);
			break;
		default:
			printf("Wrong Input !!!\nExiting...");
	}
}

void WithoutRecursion(int size, char *str)
{
	int i;
	
	for(i=size;i>=0;i--)
	{
		printf("%c", *(str+i));
	}
}

void WithRecursion(int size, char *str, int index)
{
	if(index>size)
		return;
		
	WithRecursion(size,str,index+1);
	printf("%c", *(str+index));
}
