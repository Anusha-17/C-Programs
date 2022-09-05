#include<stdio.h>
#pragma pack(1)
struct abc
{
	int a;
	char b;
	float c;
};
void main()
{
	struct abc var;
	printf("Size of structure abc is :%d",sizeof(var));
}
