#include<stdio.h>
int fact(int num,int r);
void main()
{
	int num,f,r;
	printf("Enter the value of n");
	scanf("%d",&num);
	printf("Enter the value of r");
	scanf("%d",&r);
	f=fact(num,r);
	printf("nCr is %d",f);
}
int fact(int num,int r)
{
	int n=1,i,rvalue=1,s,svalue=1,result;
	if(num==0)
	{
		n=1;
	}
	else
	{
		for(i=1;i<=num;i++)
		{
			n=n*i;
		}
	}
	
	if(r==0)
	{
		rvalue=1;
	}
	else
	{
		for(i=1;i<=r;i++)
		{
			rvalue=rvalue*i;
		}
	}
	
	s=num-r;
     
    if(s==0)
	{
		svalue=1;
	}
	else
	{
		for(i=1;i<s;i++)
		{
			svalue=svalue*i;
		}
	} 
	result=n/(rvalue*(svalue));
	return result;
}
	
	  

	
