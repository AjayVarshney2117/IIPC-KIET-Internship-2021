#include<stdio.h>

void main()
{
	int i, j, n, sameCheck, count;
	
	printf("Number of element : ");
	scanf("%d", &n);
	
	int arr[n];
	
	printf("Enter the elements : ");
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
		
	printf("\n");
	for(i=0;i<n;i++)
	{
		sameCheck = 0;
		for(j=0;j<i;j++)
		{
			if(arr[i] == arr[j])
				sameCheck = 1;
		}
		
		if(sameCheck==0)
		{
			count = 0;
			for(j=0;j<n;j++)
			{
				if(arr[i] == arr[j])
					count++;
			}
			
			printf("The frequency of %d in array is %d.\n", arr[i], count);
		}
	}
}
