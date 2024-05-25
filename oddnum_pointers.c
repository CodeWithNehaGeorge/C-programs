#include<stdio.h>
void main()
{
	int a[100];
	int *p,n1,i,num;
	p=&a[0];
	printf("Enter the number of elements of a:");
	scanf("%d",&n1);

	for(i=0;i<n1;i++)	
	{
		printf("Enter the number:");
		scanf("%d",p+i);
	}
	printf("Array a");
	for(i=0;i<n1;i++)
	{
		printf("%d\t",*(p+i));
	}
	printf("\n");

	
	for(i=0;i<n1;i++)
	{
		if (*(p+i)%2!=0)
		{
			printf("%d\t",*(p+i));
		}
	}		
			
	}
