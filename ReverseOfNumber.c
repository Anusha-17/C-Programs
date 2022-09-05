#include<stdio.h>
void rev_num(int n);
void main()
{
	int n;
	printf("Enter the number to reverse : ");
	scanf("%d",&n);
	rev_num(n);
}
void rev_num(int n)
{
	int reverse=0,rem;
	while(n!=0)
	{
		rem=n%10;
		reverse=reverse*10+rem;
		n/=10;
	}
	printf("Reverse of a number is : %d",reverse);
}
