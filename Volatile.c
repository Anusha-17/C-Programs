#include<stdio.h>
void main()
{
	/*int x=1;
	x++;
	printf("%d",x);*/
	volatile int x;
	x++;
	printf("%d",x);
}
