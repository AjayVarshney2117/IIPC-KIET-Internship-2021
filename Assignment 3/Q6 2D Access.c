#include<stdio.h>

void main()
{
	int a[3][3] = {{2,4,6}, {1,3,5}, {3,6,9}};
	
	int i, j;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ", *( *(a+i) + j) );
		printf("\n");
	}
}
