#include<stdio.h>
#define SIZE 100
void palindrome(char[],int);
int main()
{
	char string[SIZE];
	int n,len=0,i;
	printf("Enter the size of the string:\n");
	scanf("%d",&n);
	printf("Enter the string:\n");
	scanf(" %[^\n]s",string);
	for(i=0;string[i]!='\0';i++)
	{
		len++;
	}
	printf("Length of string is:%d\n",len);
	palindrome(string,len);
}
void palindrome(char s[],int len)
{
	int i,flag;
	for(i=0;i<len/2;i++)
	{
		if(s[i]==s[len-i-1])
		   flag=0;
		else
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("Given string is palindrome\n");
	else
		printf("Given string is not palindrome\n");	
}
