#include<stdio.h>

void main()
{
	int m, n, i, j;
	
	printf("Enter number of row : ");
	scanf("%d", &m);
	
	printf("Enter number of column : ");
	scanf("%d", &n);
	
	int arr[m][n];
	
	printf("Enter Elements :\n");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d", &arr[i][j]);
	}
	
	printf("The Matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	
	printf("\nTransposed Matrix is\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ", arr[j][i]);
		printf("\n");
	}
}
