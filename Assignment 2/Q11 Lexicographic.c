#include<stdio.h>
#include<string.h>

void main()
{
	char str[10][20];
	char temp[20];
	int i, j, n;
	
	printf("Enter no of elements : "); scanf("%d", &n);
	
	printf("Enter the strings :\n");
	for(i=0;i<n;i++)
	{
		printf("String %d : ", i+1);
		scanf("%s", str[i]);
	}
	
	printf("\nBefore :\n");
	for(i=0;i<n;i++)
	{
		printf("%s ", str[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(strcmp(str[j], str[j+1]) > 0)
			{
				strcpy(temp, str[j]);
				strcpy(str[j], str[j+1]);
				strcpy(str[j+1], temp);
			}
		}
	}
	
	printf("\n\nAfter :\n");
	for(i=0;i<n;i++)
	{
		printf("%s ", str[i]);
	}
}
