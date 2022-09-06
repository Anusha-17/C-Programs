#include<stdio.h>
#define SIZE 100
void freq_count(int[],int);
void main()
{
	int arr[SIZE],i,n;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	void (*fp)(int [],int)=freq_count;
	fp(arr,n);
}
void freq_count(int arr[],int n)
{
	int i,j,freq,count=0;
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
		printf("Array element : %d\t Frequency is :%d\n",arr[i],count);
	}
}
}
