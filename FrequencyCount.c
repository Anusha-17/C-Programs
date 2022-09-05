#include<stdio.h>
#define size 50
void frequency_count(int[],int);
void main()
{
	int arr[size],n,i;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	frequency_count(arr,n);
}
void frequency_count(int arr[],int n)
{
	int i,j,count=0,freq;
	for(i=0;i<n;i++)
	{
		count=1;
		if(arr[i]>0)
		{
			for(j=i+1;j<n;j++)
			{
				if(arr[i]==arr[j])
				{
					count++;
					arr[j]=-1;
				}
			}
			printf("Array element:%d and frequency is :%d\n",arr[i],count);
		}
	}
}
