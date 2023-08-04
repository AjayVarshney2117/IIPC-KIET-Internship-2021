#include<stdio.h>

typedef struct vector {
	float x;
	float y;
} vector;

vector Sum(vector a[], int size)
{
	vector sum = {0,0};
	int i;
	
	for(i=0;i<size;i++)
	{
		sum.x += a[i].x;
		sum.y += a[i].y;
	}
	
	return sum;
}

void main()
{
	vector a[10];
	vector sum;
	int i, n;
	
	printf("Enter the size : ");
	scanf("%d", &n);
	
	printf("\nEnter the elements :\n");
	for(i=0;i<n;i++)
	{
		printf("Element[%d].x : ", i); scanf("%f", &a[i].x);
		printf("Element[%d].y : ", i); scanf("%f", &a[i].y);
	}
	
	sum = Sum(a,n);
	printf("The sum of these vectors are ( %.2f , %.2f )", sum.x, sum.y);
}
