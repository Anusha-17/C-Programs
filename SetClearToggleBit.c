#include<stdio.h>
int setbit(int n,int k)
{
	return (n|(1<<(k-1)));
}
int clearbit(int n,int k)
{
	return (n&(~(1<<(k-1))));
}
int togglebit(int n,int k)
{
	return (n^(1<<(k-1)));
}
void main()
{
	int n,k;
	printf("Enter the number :");
	scanf("%d",&n);
	printf("Enter the kth bit number : ");
	scanf("%d",&k);
	printf("Set bit is : %d\n",setbit(n,k));
	printf("Clear bit is : %d\n",clearbit(n,k));
	printf("Toggle bit is : %d\n",togglebit(n,k));
}
