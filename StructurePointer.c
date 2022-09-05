#include<stdio.h>
#include<stdlib.h>
struct student
{
	int rollno;
	char name[20];
};
void main()
{
	struct student *ptr; //creating pointer to struct
	int n,i;
	printf("Enter number of students:");
	scanf("%d",&n);
	ptr = (struct student*)malloc(n*sizeof(struct student));
	for(i=0;i<n;i++)
	{
		printf("Enter Roll No and Name of the student:\n");
		scanf("%d %s",&(ptr+i)->rollno,&(ptr+i)->name);
	}
	printf("Details of the students :\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\n",(ptr+i)->rollno,(ptr+i)->name);
	}
	free(ptr);
}
