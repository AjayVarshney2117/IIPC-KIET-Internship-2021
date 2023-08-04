#include<stdio.h>
#include<string.h>

void main()
{
	char str1[20], str2[20];
	int len1, len2, sum1=0, sum2=0, i;
	
	printf("Enter String 1 : ");
	scanf("%s", str1);
	printf("Enter String 2 : ");
	scanf("%s", str2);
	
	len1 = strlen(str1);
	len2 = strlen(str2);
	
	i=0;
	while(str1[i]!='\0')
	{
		sum1 += str1[i];
		i++;
	}
	
	i=0;
	while(str2[i]!='\0')
	{
		sum2 += str2[i];
		i++;
	}
	
	if((len1 == len2) && (sum1 == sum2))
		printf("\nBoth strings are Anagram to each other.");
	else
		printf("\nBoth strings are NOT Anagram to each other.");
}
