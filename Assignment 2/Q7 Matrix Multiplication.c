#include<stdio.h>

void main()
{
	int m1, n1, m2, n2, i, j, k;
	int arr1[10][10];
	int arr2[10][10];
	int resArr[10][10];
	
	//Inputs for Matrix 1
	printf("Enter number of row of Matrix 1 : ");
	scanf("%d", &m1);
	
	printf("Enter number of column of Matrix 1 : ");
	scanf("%d", &n1);
	
	printf("Enter Elements of Matrix 1 :\n");
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
			scanf("%d", &arr1[i][j]);
	}
	
	//Inputs for Matrix 2
	printf("\nEnter number of row of Matrix 2 : ");
	scanf("%d", &m2);
	
	printf("Enter number of column of Matrix 2 : ");
	scanf("%d", &n2);
	
	printf("Enter Elements of Matrix 2 :\n");
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
			scanf("%d", &arr2[i][j]);
	}
	
	//Matrix Multiply and output
	if(n1 == m2)
	{
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
			{
				resArr[i][j] = 0;
				
				for(k=0;k<n1;k++)
					resArr[i][j] += arr1[i][k]*arr2[k][j];
			}
		}
		
		printf("\nThe Resulting Matrix is\n");
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
				printf("%d ", resArr[i][j]);
			printf("\n");
		}
	}
	else
		printf("\n\nMatrix Multiplication can\'t happen");
}

