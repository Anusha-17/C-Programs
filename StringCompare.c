#include<stdio.h>
#include<string.h>
void strcamp(char[],char[]);
void main()
{
	char str1[50],str2[50];
	printf("Enter first string: \n");
	gets(str1);
	printf("Enter second string: \n");
	gets(str2);
	strcamp(str1,str2);
}
void strcamp(char str1[],char str2[])
{
	int i,result;
	for(i=0;str1[i]==str2[i] && str1[i]=='\0';i++);
	if(str1[i]<str2[i])
	{
		printf("Str1 is less than str2\n");
	}
	else if(str1[i]>str2[i])
	{
		printf("Str2 is less than str1");
	}
	else
	{
		printf("Str1 is equal to str2");
	}
}
