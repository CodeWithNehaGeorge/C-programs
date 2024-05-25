#include <stdio.h>
#include <stdlib.h>

int a[50];
int front=-1,rear=-1,max;

void insertr(int v)
{
 if(front==-1 && rear==-1)
 { 
  front=0;
  rear=0;
  a[rear]=v;
 }
 else if(rear==max-1 && front==0)
 {
  printf("Queue overflow");
 }
 else
 {
  rear++;
  a[rear]=v;
 }
}

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
  printf("Queue overflow");
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


int delete(int flag)
{
 int d=-1;
 if(front==-1 && rear==-1)
 {
  printf("\nEmpty queue");
  return d;
 }
 else if(front==rear)
 {
	 d=a[rear];
	 front=-1;
	 rear=-1;
	 return d;
 }
 else
 {
	 if(flag==0)
	 {
		 d=a[front];
		 front++;
	 }
	 else
	 {
		 d=a[rear];
		 rear--;
	 }
	 return d;
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
					int r;
					r=delete(1);
					if(r!=-1)
					{
						printf("\nElement has been deleted from rear");
						printf("\nThe deleted value is:%d",r);
					}
					break;
			 case 4:printf("\nDeletion at front");
					int j;
					j=delete(0);
					if(j!=-1)
					{
						printf("\nElement has been deleted from front");
					    printf("\nThe deleted value is:%d",j);
					}
					break;
			 case 5:printf("Queue\n");
					display();
					break;
			 case 6:exit(0);
			 default:printf("\nInvalid choice");
		 }
	  }
}
		        
	 
	    
		 

 
