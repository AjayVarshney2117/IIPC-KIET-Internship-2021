#include<stdio.h>

void printArray(int,int[]);

void main()
{
	int a[10] = {10, 1, 2, 1, 1, 7, 217, 8, 3, 0};
	int *p = a;
	
	printArray(10,a);
}

void printArray(int size, int a[])
{
	int i;
	printf("INDEX%10s%10s", "ELEMENT", "ADDRESS");
	printf("\n--------------------------------");
	for(i=0;i<size;i++)
	{
		printf("\n%3d%10d%12d", i, a[i], &a[i]);
	}
}
