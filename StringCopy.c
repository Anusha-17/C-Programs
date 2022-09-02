#include<stdio.h>
#include<string.h>
void strcopy(char[],char[]);
void main()
{
	char src[50],dest[50];
	printf("Enter the string: \n");
	gets(src);
	strcopy(src,dest);
}
void strcopy(char src[],char dest[])
{
	int i;
	for(i=0;src[i]!='\0';i++)
	{
		dest[i]=src[i];
	}
	dest[i]='\0';
    printf("String that we copied into destination is : %s\n",dest);
    printf("Total number of characters that we copied : %d",i);
}
