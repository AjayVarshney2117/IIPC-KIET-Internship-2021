#include<stdio.h>

void swap(int*,int*);

void main()
{
	int i, n;
	printf("Number of element : ");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Enter the elements : ");
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
		
	printf("Before Reversing...\n");
	for(i=0;i<n;i++)
		printf("%d\t", arr[i]);
	
	for(i=0;i<n/2;i++)
	{
		swap(&arr[i],&arr[n-i-1]);
	}
	
	printf("\nAfter Reversing...\n");
	for(i=0;i<n;i++)
		printf("%d\t", arr[i]);
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
