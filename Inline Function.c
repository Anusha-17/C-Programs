#include<stdio.h>
inline int add(int a,int b)//Inline function declaration
{
	return(a+b);
}
void main()
{
	int sum;
	sum=add(10,7);
	printf("Sum is : %d",sum);	
}
