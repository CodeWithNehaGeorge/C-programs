#include<stdio.h>
void main()
{
	int a[100],n,i,num,flag=0;
	printf("Enter the no of elements you wish to input:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("Enter the number to be searched");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Element found at position:%d",i+1);
	}
	else
	{
		printf("Element not found");
	}
}


	

	

		


				
	
	


