#include<stdio.h>
#define PI 3.143 //object like macro
void main()
{
	float radius, area;
	printf("Enter the radius :");
	scanf("%f",&radius);
	area = PI*radius*radius;
	printf("Area of circle is : %.2f",area);	
}
