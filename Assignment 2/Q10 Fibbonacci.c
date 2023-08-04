#include<stdio.h>
#include<conio.h>

void menu();
void WithoutRecursion(int);
void WithRecursion(int);

void main()
{
	menu();
	getch();
}

void menu()
{
	char x;
	int n;
	
	printf("Enter number of elements : ");
	scanf("%d", &n);
	
	system("cls");
	
	printf("******CHOOSE ONE******");
	printf("\n1. Without Recursion");
	printf("\n2. With Recursion");
	
	x = getch();
	system("cls");
	
	printf("Fibbonacci Sequence is...\n");
	
	switch(x)
	{
		case '1':
			WithoutRecursion(n);
			break;
		case '2':
			WithRecursion(n);
			break;
		default:
			printf("Wrong Input !!!\nExiting...");
	}
}

void WithoutRecursion(int n)
{
	int f1=0, f2 =1, f3;
	
	f3 = f1 + f2;
	
	printf("%d %d", f1, f2);
	
	while(n - 2)
	{
		printf(" %d", f3);
		
		f1 = f2;
		f2 = f3;
		f3 = f1 + f2;
		
		n--;
	}
}

void WithRecursion(int n)
{
	static int f1=0, f2=1, f3;
	
    if(n>0)
	{
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        
        printf("%d ",f3);
        
        WithRecursion(n-1);
    }
}
