#include<stdio.h>
void arraytarget(int arr[],int n,int target)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j]==target)
			{
				printf("Indices of two numbers %d,%d\n",i,j);
				return;
			}
		}
	}
	printf("Target indices not found\n");
}
void main()
{
	int arr[]={2,7,11,15};
	int target=20;
	int n=sizeof(arr)/sizeof(arr[0]);
	arraytarget(arr,n,target);
}
