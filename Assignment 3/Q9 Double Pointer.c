#include<stdio.h>
#include<stdlib.h>

void main()
{
	int **matrix;
	int row = 3, col = 3;
	int i, j;
	
	matrix = (int**)malloc(row*sizeof(int*));
	
	for(i=0;i<row;i++)
		matrix[i] = (int*)malloc(col*sizeof(int));
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			*(*(matrix + i) + j) = i+j;
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%d ", *(*(matrix + i) + j));
			
		printf("\n");
	}
	
	if(matrix)
		free(matrix);
}
