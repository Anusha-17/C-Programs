#include<stdio.h>
#include<stdlib.h>
void main()
{
	FILE *fp;
	char ch;
	int size=0;
	fp=fopen("ptr.c","r");
	if(fp==NULL)
	{
		printf("File unable to open\n");
	}
	else
	{
		printf("File opened successfully.\n");
	}
	fseek(fp,0,2); //sets the file pointer to given position
	size=ftell(fp); //returns current position
	printf("The size of the file is :%d\n",size);
	fclose(fp);
}
