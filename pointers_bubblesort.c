#include<stdio.h>
void main()
{
	int a[100],i,n,temp,j;
	int *p;
	p=a;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(a+i));
	}
	
    for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(*(a+j)>*(a+j+1))
			{
				temp=*(a+j);
				*(a+j)=*(a+j+1);
				*(a+j+1)=temp;
			}
		}
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(a+i));
	}
	printf("largest%d",*(a+n-1));
	
}
	
	
