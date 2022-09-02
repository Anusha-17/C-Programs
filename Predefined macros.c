#include<stdio.h>
void main()
{
	printf("File : %s\n",__FILE__); //represents current file name
	printf("Date : %s\n",__DATE__); //represents current date
	printf("Time : %s\n",__TIME__); //represents current time
	printf("Line : %d\n",__LINE__); //represents current line number
	printf("STDC : %d\n",__STDC__);	// It is defined as 1 when compiler compiles with the ANSI standard
}
