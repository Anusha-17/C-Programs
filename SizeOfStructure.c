#include<stdio.h>
struct emp
{
	int empno;
	char ename[20];
	float esal;
};
void main()
{
	struct emp *ptr=0;
	ptr++;
	printf("Size of emp :%d\n",ptr);
}

