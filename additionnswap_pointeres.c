#include<stdio.h>
int swap(int *pa,int *pb);
int main()
{
	int *pa,*pb,sum=0,a=3,b=5;
	pa=&a;
	pb=&b;
	sum=*pa+*pb;
	printf("sum:%d",sum);
	swap(pa,pb);
}
	
int swap(int *pa,int *pb)
{       
	    int temp;
		printf("a:%d",*pa);
		printf("b:%d",*pb);
		temp=*pa;
		*pa=*pb;
		*pb=temp;
		printf("a:%d",*pa);
		printf("b:%d",*pb);
}

	
	
