#include<stdio.h>
int swap(int *a,int n);
void main()
{
  int *a,n,i;
  printf("Enter the number of elements:");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
	  printf("Enter the element");
	  scanf("%d",a+i);
  }
  swap(a,n);
  
}
int swap(int *a,int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
	{   
		printf("sum:%d",sum);
		printf("a%d",*(a+i));
		sum=sum+(*(a+i));
	}
	printf("sum:%d",sum);
	
}


  
