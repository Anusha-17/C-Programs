#include<stdio.h>
#include<string.h>
void main()
{
	int size=20;
	char str1[size],str2[size];
	strcpy(str1,"Hello World");
	memcpy(str2,str1,10);
	printf(str2);
}
