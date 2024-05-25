#include<stdio.h>
struct details
{
	char name[20];
	int mark;
	int roll;
};

void main()
{   
	int i,n,sum=0,avg;
	printf("Enter the number of student details you wish to input:");
	scanf("%d",&n);
	struct details s1[n];
	for(i=0;i<n;i++)
	{
		printf("Enter roll no:");
		scanf("%d",&s1[i].roll);
		printf("Enter mark");
		scanf("%d",&s1[i].mark);
		printf("Enter the name:");
		scanf("%s",s1[i].name);
		sum=sum+s1[i].mark;
		
	}
	avg=sum/n;
    printf("%d",avg);
}
