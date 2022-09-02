#include<stdio.h>
#include<stdlib.h>
void nullpointer()
{
	int *var = NULL;
	printf("Var=%d",*var);
}
void voidpointer()
{
	int x=7;
	void *ptr;
	ptr=&x;
	printf("After typecasting, a=%d",*(int*)ptr);
}
void wildpointer()
{
	int *ptr;
	printf("ptr=%d",*ptr);
}
void danglingpointer()
{
	int *ptr=(int*)malloc(sizeof(int));
	int a=3;
	ptr=&a;
	free(ptr); // now this ptr is known as dangling pointer
	printf("After deallocatinf its memory *ptr = %d",*ptr);
}
void main()
{
    int input;
    printf("1.Null Pointer 2.Void Pointer 3.Wild Pointer 4.Dangling Pointer\n");
    printf("Enter your choice :");
    scanf("%d",&input);
    switch(input)
    {
    case 1 : nullpointer();
             break;
    case 2 : voidpointer();
             break;
	case 3 : wildpointer();
             break;
	case 4: danglingpointer();
             break;	
    default : printf("Invalid input...");
	         break;	          

}
}

