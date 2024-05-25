#include<stdio.h>

struct student
{
	char name[50];
	int rollno;
	int marks[3];
	int total;
}s1,s2,s3;

void main()
{
	printf("Enter name:");
	gets(s1.name);
	printf("Enter roll no");
	scanf("%d",&s1.rollno);
	printf("enter marks");
	for(int i=0;i<3;i++)
	{
		scanf("%d",&s1.marks[i]);
	}
	s1.total=s1.marks[0]+s1.marks[1]+s1.marks[2];
	printf("Name is:\n");
	puts(s1.name);
	printf("Total marks:%d",s1.total);
}

	
	
	
