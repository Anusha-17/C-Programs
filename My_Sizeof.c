#include<stdio.h>
#define my_sizeof(i) (char *)(&i+1)-(char *)(&i)
void main()
{
	int a=10;
	char b='a';
	float c=12345.67;
	printf("Size of a=%d\n",my_sizeof(a));
	printf("Size of b=%d\n",my_sizeof(b));
	printf("Size of c=%d\n",my_sizeof(c));
	
}
