#include<stdio.h>

typedef struct item_struct {
	char name[20];
	int quantity;
	int price;
} item_struct;

typedef union item_union {
	char name[20];
	int quantity;
	int price;
} item_union;

void main()
{
	printf("The size of item structure : %d\n", sizeof(item_struct));
	printf("The size of item union     : %d", sizeof(item_union));
}
