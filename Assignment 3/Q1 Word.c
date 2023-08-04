#include<stdio.h>

void printWord(char *str)
{
	while(*str != '\0')
	{
		printf("%c", *str);
		str++;
	}
}

void main()
{
	char word[] = {"Ajay"};
	char *name = word;
	
	printf("Name : ");
	printWord(name);
}
