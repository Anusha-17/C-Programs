#include<stdio.h>
void main()
{
	int arr[50],n,oddnum=0,evennum=0,i;
	printf("Enter size of an array:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);	
	}
	printf("Even numbers in the array:\n");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			printf("%d\t",arr[i]);
		}
	}
	printf("\nOdd numbers in the array:\n");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			printf("%d\t",arr[i]);
		}
	}
}
