#include<stdio.h>

int palindrome(int);

int main()
{
	int n, ans;
	const char str[2][5] = {"No.", "Yes."};
	
	printf("Enter a number : ");
	scanf("%d", &n);
	
	ans = palindrome(n);
	
	printf("The number is %s", str[ans]);
	
	return 0;
}

int palindrome(int n)
{
	int rev=0, temp;
	
	temp = n;
	
	while(temp)
    {
        rev += temp%10;
        rev *= 10;
        temp /= 10;
    }
    rev /= 10;
    
    return ((n==rev)?1:0);
}

