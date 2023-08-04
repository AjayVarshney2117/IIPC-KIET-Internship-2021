#include<stdio.h>

void main()
{
	void *pv;
	int *pi;
	char *pc;
	float *pf;
	double *pd;
	
	printf("The size of void pointer -----> %d\n", sizeof(pv));
	printf("The size of int pointer -----> %d\n", sizeof(pi));
	printf("The size of char pointer -----> %d\n", sizeof(pc));
	printf("The size of float pointer -----> %d\n", sizeof(pf));
	printf("The size of double pointer -----> %d\n", sizeof(pd));
}
