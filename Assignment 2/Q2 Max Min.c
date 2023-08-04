#include<stdio.h>

int min(int size, int a[]);
int max(int size, int a[]);

void main()
{
	int i, n;
	printf("Number of element : ");
	scanf("%d", &n);
	
	int arr[n];
	
	scanf("Enter the elements : ");
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
		
	printf("The minimum in array is %d\n", min(n, arr));
	printf("The maximum in array is %d", max(n, arr));
}

int min(int size, int a[])
{
	int m, i;
	
	m = a[0];
	for(i=0;i<size;i++)
	{
		if(m>a[i])
			m = a[i];
	}
	
	return m;
}

int max(int size, int a[])
{
	int m, i;
	
	m = a[0];
	for(i=0;i<size;i++)
	{
		if(m<a[i])
			m = a[i];
	}
	
	return m;
}

