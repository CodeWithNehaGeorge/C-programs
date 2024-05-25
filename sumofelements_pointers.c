#include<stdio.h>
/*int main()
{
	int *a[100];
}

int sum(int *a[100])
{
	int sum=0,i=0,n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",*a[i]);
		sum += *(a + i); 
	}
	printf("%d",sum);
}*/

/*int main()
{   int n;
	int *a;
	int sum=0;
	int i,counter;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&*(a+i));
	}
	for(i=0;i<n;i++)
	{
		printf("%d \n",*(a+i));
		counter=*(a+i);
		sum+=*(a+i);
	
	}
	printf("%d",sum);
	
}*/

int sum(int *a);
int main()
{
	int *a;
	sum(&a);
}

int sum(int *a)
{
	int n,i,sum1=0;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
		
	}
	for(i=0;i<n;i++)
	{
	   printf("%d",*(a+i));
	   sum1=sum1+*(a+i);
		
	} 
	printf("sum%d:",sum1);
}


	
		

