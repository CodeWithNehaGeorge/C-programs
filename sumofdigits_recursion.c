#include<stdio.h>
int sum(int num);
void main()
{
	int s,num;
	printf("Enter the number");
	scanf("%d",&num);
	s=sum(num);
	printf("sum of sigits %d",s);
}

int sum(int num)
{   
	int sum1;
	if(num==0)
	{
		return sum1;
	}
	else
	{
		sum1=num%10;
		return(sum1+sum(num/10));
	}
}




	
