#include<stdio.h>
#include<string.h>
void concat(char[],char[]);
void main()
{
	char str1[50],str2[50];
	printf("Enter first string: \n");
	gets(str1);
	printf("Enter second string: \n");
	gets(str2);
	concat(str1,str2);
}
void concat(char str1[],char str2[])
{
	int i,j;
	i=strlen(str1);
	for(j=0;str2[j]!='\0';i++,j++)
	{
		str1[i]=str2[j];
	}
	str1[i]='\0';
    printf("Concatenated string is : %s",str1);
}
