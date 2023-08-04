#include<stdio.h>
#include<string.h>

void main()
{
	char str1[50], str2[50];
	int sameFlag=1, len1, len2, i;
	
	printf("String 1 : ");
	scanf("%s", str1);
	
	printf("String 2 : ");
	scanf("%s", str2);
	
	len1 = strlen(str1);
	len2 = strlen(str2);
	
	if(len1 == len2)
	{
		for(i=0;i<len1;i++)
		{
			if(str1[i] != str2[i])
			{
				sameFlag = 0;
				break;
			}
		}
	}
	
	if(sameFlag)
		printf("\nStrings are same.");
	else
		printf("\nStrings are not same.");
}
