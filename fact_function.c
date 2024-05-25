#include<stdio.h>
int fact(int num);
void main()
{
	int num,f;
	printf("Enter the number");
	scanf("%d",&
	num);
	f=fact(num);
	printf("factorial is %d",f);
}
int fact(int num)
{
	int fact=1,i;
	if(num==0)
	{
		fact=1;
	}
	else
	{
		for(i=1;i<=num;i++)
		{
			fact=fact*i;
		}
	}
	return fact;
}
	
	
