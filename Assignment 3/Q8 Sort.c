#include<stdio.h>

void swap(int*,int*);
void sort(int*,int);

void main()
{
	int n, i;
	
	printf("Enter the size : ");
	scanf("%d", &n);
	
	int a[n];
	
	printf("Enter elements :\n");
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	
	printf("\nBefore Sorting.....\n");
	for(i=0;i<n;i++)
		printf("%d ", a[i]);
	
	sort(a, n);
	
	printf("\n\nAfter Sorting.....\n");
	for(i=0;i<n;i++)
		printf("%d ", a[i]);
}

void swap(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

void sort(int *a, int size)
{
	int i,j;
	
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(*(a+j) > *(a+j+1))
				swap( a+j , a+j+1 );
		}
	}
}
