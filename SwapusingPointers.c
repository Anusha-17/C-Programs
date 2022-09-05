#include<stdio.h>
void main()
{
	int x,y,*a,*b,temp;
	printf("Enter two numbers:");
	scanf("%d %d",&x,&y);
	printf("Before swapping x=%d, y=%d\n",x,y);
	a=&x;
	b=&y;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("After swapping x=%d, y=%d\n",x,y);
}
