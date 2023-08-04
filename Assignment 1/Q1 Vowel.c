#include<stdio.h>

void main()
{
	const char vowel[11] = "AEIOUaeiou";

	char inputChar;
	int i = 0, vowelFlag = 0;

	printf("Enter a character : ");
	scanf("%c", &inputChar);

	while (vowel[i] != '\0')
	{
		if (inputChar == vowel[i])
		{
			vowelFlag = 1;
			break;
		}
		i++;
	}

	if (vowelFlag)
		printf("%c is a vowel", inputChar);
	else
		printf("%c is a not vowel", inputChar);
}