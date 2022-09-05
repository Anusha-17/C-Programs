#include<stdio.h>
struct abc
{
	int a;
	char b;
	double c;
}__attribute__((packed));;
void main()
{
	struct abc var;
	printf("Size of structure abc is :%d",sizeof(var));
}
