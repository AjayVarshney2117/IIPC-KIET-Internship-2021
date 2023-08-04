#include<stdio.h>

void main()
{
    int i, n, rev=0;
    
    printf("Enter a number : ");
    scanf("%d", &n);
    
    while(n)
    {
        rev += n%10;
        rev *= 10;
        n /= 10;
    }
    rev /= 10;
    
    printf("The Reverse of number is %d.", rev);
}