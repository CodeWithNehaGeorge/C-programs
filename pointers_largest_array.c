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
	temp=*(a+0);
    for(i=1;i<n-1;i++)
	{
		if(*(a+i)>temp)
		{
			temp=*(a+i);
		}
	}
	printf("%d",temp);
	
		
}
	
