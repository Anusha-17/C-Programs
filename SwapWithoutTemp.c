#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("Before swapping a=%d ,b=%d\n",a,b);
	a=a+b;//10+20=30
	b=a-b;//30-20=10
	a=a-b;//30-10=20
	printf("After swapping a=%d ,b=%d\n",a,b);
}
