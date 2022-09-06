#include<stdio.h>
void main()
{
	int a[2][2],b[2][2],sum[2][2],i,j;
	printf("Enter elements of first matrix:\n");
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
		printf("Enter a[%d][%d]:",i+1,j+1);
		scanf("%d",&a[i][j]);
	}
	printf("Enter elements of second matrix:\n");
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
		printf("Enter b[%d][%d]:",i+1,j+1);
		scanf("%d",&b[i][j]);
	}
	for(i=0;i<2;i++)
	for(j=0;j<2;j++)
	{
		sum[i][j]=a[i][j]+b[i][j];
	}
	printf("Sum of matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d \t",sum[i][j]);
    	}
    	printf("\n");
	}
}
