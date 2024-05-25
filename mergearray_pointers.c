#include<stdio.h>
void main()
{
	int a[100],b[100];
	int *p,*q,n1,n2,i,l,num;
	p=&a[0];
	q=&b[0];
	printf("Enter the number of elements of a:");
	scanf("%d",&n1);
	printf("Enter the number of elements of b:");
	scanf("%d",&n2);
	l=n1+n2;
	for(i=0;i<n1;i++)	
	{
		printf("Enter the number:");
		scanf("%d",p+i);
	}
	for(i=0;i<n2;i++)	
	{
		printf("Enter the number:");
		scanf("%d",q+i);
	}
	printf("Array a");
	for(i=0;i<n1;i++)
	{
		printf("%d\t",*(p+i));
	}	
	printf("\nArray b");
	for(i=0;i<n2;i++)
	{
		printf("%d\t",*(q+i));
	}	
	for(i=0;i<l;i++)
	{
	  *(p+i+n1)=*(q+i);
			
			
	}
	printf("\n");
	for(i=0;i<l;i++)
	{
		printf("%d\t",*(p+i));
	}		
			
	}
	
		
	
	
	
	
	
