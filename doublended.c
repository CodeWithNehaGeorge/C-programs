#include <stdio.h>
#include <stdlib.h>

int rear=-1,front=-1,max,a[50];

void insertf(int v)
{
	int i;
	if(front==-1 && rear==-1)
	{
		front=0;
		rear=0;
		a[front]=v;
	}
	else if(rear==max-1 && front==0)
	{
		printf("overflow");
	}
	else
	{
		for(i=rear;i>=front;i--)
		{
			a[i+1]=a[i];
		}
		a[front]=v;
		rear++;
	}
}

void insertr(int v)
{
	int i;
	if(front==-1 && rear==-1)
	{
		rear=0;
		front=0;
		a[rear]=v;
	}
	else if(rear==max-1 && front==0)
	{
		printf("overflow");
	}
	else
	{
	 rear++;
	 a[rear]=v;
	}
}


void deleter()
{
	int d;
	if(front==-1 && rear==-1)
	{
		printf("Queue empty");
	}
	else if(front==rear)
	{
		d=a[rear];
		printf("Deleted element:%d",d);
		front=-1;
		rear=-1;
	}
	else
	{
		d=a[rear];
		printf("Deleted element:%d",d);
		rear--;
	}
}

void deletef()
{
	int d1;
	if(front==-1 && rear==-1)
	{
		printf("Queue empty");
	}
	else if(front==rear)
	{
		d1=a[front];
		printf("Deleted element:%d",d1);
		front=-1;
		rear=-1;
	}
	else
	{
		d1=a[front];
		printf("Deleted element:%d",d1);
		front++;
	}
}


void display()
{
	 int i;
	 if(front==-1 && rear==-1)
	 {
		 printf("Empty Queue");
	 }
	 else
	 {
		 for(i=front;i<=rear;i++)
	     {
		   printf("%d\t",a[i]);
	     }
	 }
}
 
void  main()
{
	printf("Double ended queue\n");
	int ch,v;
	printf("Enter the limit:");
	scanf("%d",&max);
	while(1)
	{
		 printf("\nMENU\n");
		 printf("1.Insertion at rear\n");
		 printf("2.Insertion at front\n");
		 printf("3.Deletion at rear\n");
		 printf("4.Deletion at front\n");
		 printf("5.Display queue\n");
		 printf("6.Exit\n");
		 printf("Enter your choice:");
		 scanf("%d",&ch);
		 switch(ch)
		 {
			 case 1:printf("\nInsertion at rear");
					printf("\nEnter the value to insert:");
					scanf("%d",&v);
					insertr(v);
					printf("Element has been inserted at rear");
					break;
			 case 2:printf("\nInsertion at front");
					printf("\nEnter the value to insert:");
					scanf("%d",&v);
					insertf(v);
					printf("Element has been inserted at front");
					break; 
			 case 3:printf("\nDeletion at rear");
					deleter();
					printf("\nElement has been deleted from rear");
					break;
			 case 4:printf("\nDeletion at front");
					deletef();
					printf("\nElement has been deleted from front");
					break;
			 case 5:printf("Queue\n");
					display();
					break;
			 case 6:exit(0);
			 default:printf("\nInvalid choice");
		 }
	  }
}


	
