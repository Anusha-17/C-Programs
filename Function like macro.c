#include<stdio.h>
#define PI 3.143 
#define AreaOfCircle(radius) (PI*radius*radius) //function like macros
void main()
{
	float radius, area;
	printf("Enter the radius :");
	scanf("%f",&radius);
	area = AreaOfCircle(radius);
	printf("Area of circle is : %.2f",area);	
}
