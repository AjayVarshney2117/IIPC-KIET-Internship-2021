#include<stdio.h>

void main()
{
	int n1, n2, hcf, lcm;
	
	printf("Enter two numbers : ");
	scanf("%d %d", &n1, &n2);
	
	hcf = HCF(n1,n2);
	lcm = LCM(n1,n2);
	
	printf("HCF of numbers : %d", hcf);
	printf("\nLCM of numbers : %d", lcm);
}

int HCF(int n1, int n2)
{
	if(n2<n1)
		return HCF(n2,n1);
	
	if(n2%n1==0)
		return n1;
	else
		return HCF(n2%n1,n1);
}

int LCM(int n1, int n2)
{
	int max;
	
	max = (n1>n2)?n1:n2;
	
	while(1)
	{
		if(max%n1==0 && max%n2==0)
		{
			return max;
		}
		max++;
	}
}
