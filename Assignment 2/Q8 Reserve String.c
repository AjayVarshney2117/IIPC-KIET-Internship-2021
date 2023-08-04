#include<stdio.h>
#include<string.h>

void swap(char*,char*);

void main()
{
	int n, i;
	char str[100];
	
	printf("Enter a word : ");
	scanf("%s", str);
	
	printf("Before...\n");
	printf("%s", str);
	
	n = strlen(str);
	
	for(i=0;i<n/2;i++)
	{
		swap(&str[i],&str[n-i-1]);
	}
	
	printf("\n\nAfter...\n");
	printf("%s", str);
}

void swap(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}
