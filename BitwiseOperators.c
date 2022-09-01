#include<stdio.h>
#define x 5
#define y 3
void main()
{
	printf("Bitwise AND : %d\n", x&y);
	printf("Bitwise OR : %d\n", x|y);
	printf("Bitwise XOR : %d\n", x^y);
	printf("Bitwise Compliment : %d\n", ~x);
	printf("Bitwise left shift : %d\n", x<<2);
	printf("Bitwise right shift : %d\n", x>>2);
}
