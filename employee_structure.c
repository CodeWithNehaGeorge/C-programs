#include<stdio.h>
#include<string.h>
struct employee
{
	char name[100];
	int id;
	float salary;
};


int main()
{
	struct employee s[10];
	int n,i;
	printf("Enter the number of details you wish to input:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{   printf("i:%d",i);
		scanf("%d",&s[i].id);
		scanf("%f",&s[i].salary);
		scanf("%s",s[i].name);
		
	}
	for(i=0;i<n;i++)
	{
		
		printf("\n%d",s[i].id);
		printf("\n%f\n",s[i].salary);
		puts(s[i].name);

	}
}
	

	

	
	
		
	
		
