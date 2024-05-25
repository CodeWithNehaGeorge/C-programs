#include <stdio.h>
#include <stdlib.h>

int rear=-1,front=-1,max;
struct queue
{
 int value;
 int priority;
}a[10];

void enqueue(int v,int p)
{
 int i,temp,temp1;
 if(front==-1 && rear==-1)
 {
  front=0;
  rear=0;
  a[rear].value=v;
  a[rear].priority=p;
  rear++;
 }
 else if(rear==max)
 {
  printf("Queue overflow");
 }
 else
 {
  a[rear].value=v;
  a[rear].priority=p;
  for(i=rear;a[i].priority<a[i-1].priority;i--)
  {
   temp=a[i].priority;
   a[i].priority=a[i-1].priority;
   a[i-1].priority=temp;
   temp1=a[i].value;
   a[i].value=a[i-1].value;
   a[i-1].value=temp1;
  }
  rear++;
 }
}

void dequeue()
{
 int i;
 if(front==-1 && rear==-1)
 {
  printf("Queue empty");
 }
 else if(front==rear)
 {
  front=-1;
  rear=-1;
 }
 else
 {
  for(i=1;i<rear;i++)
  {
   a[i-1].value=a[i].value;
   a[i-1].priority=a[i].priority;
  }
  rear=i-1;
 }
}

void display()
{
 int i;
 if(front==-1 && rear==-1)
 {
  printf("Queue empty");
 }
 else
 {
  printf("values\t");
  for(i=front;i<rear;i++)
  {
   printf("%d\t",a[i].value);
  }
 }
}

void main()
{
 int ch,v,p;
 printf("Enter the limit:");
 scanf("%d",&max);
 while(1)
 {
   printf("\nMENU");
   printf("\n1.Add element");
   printf("\n2.Delete element");
   printf("\n3.Display");
   printf("\n4.Exit");
   printf("\nEnter your choice:");
   scanf("%d",&ch);
  switch(ch)
  { 
    case 1:printf("Enter the value:");
           scanf("%d",&v);
	   printf("Enter the priority:");
	   scanf("%d",&p);
           enqueue(v,p);
           break;
    case 2:dequeue();
           break;
    case 3:display();
           break;
    case 4:exit(0);
           break;
  }
 }
}
 
  
