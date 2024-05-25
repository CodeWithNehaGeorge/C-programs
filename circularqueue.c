#include <stdio.h>
#include <stdlib.h>

int a[50];
int front=-1;
int rear=-1;
int max;

int isFull()
{
	if (front==rear && front!=-1)
		{
			printf("Queue is FULL!\n");
			return 1;
		}
	else
		return 0;
}

int isEmpty()
{
	if (front==-1 && rear==-1)	
		{
			printf("EMPTY Queue!\n");
			return 1;
		}
	else
		return 0;
}

void enqueue(int x)
{
	if(front==-1 && rear==-1)
		{
			front=0;
			rear=0;
			a[rear]=x;
			rear=rear+1;
			printf("element has been enqueued!\n");
		}
	else if(front==rear && front!=-1)
		{
			printf("Queue Overflow!\n");
		}
	else
		{
			a[rear]=x;
			rear=(rear+1)%max;
			printf("element has been enqueued!\n");
		}
}

void dequeue()
{
	int d=-1;
	if (front==-1 && rear==-1)
	{
		printf("Queue is empty!\n");
	}
	else if ((front+1)%max==rear)
	{
		d=a[front];
		front=-1;
		rear=-1;
		printf("element has been dequeued!\n");
	}
	else
	{
		d=a[front];
		front=((front +1)%max);
		printf("element has been dequeued!\n");
		return a;
		
	}
}

void display()
{
	int i=front;
	if (rear==-1 && front==-1)
	{
		printf("empty queue!\n");
	}
	else
	{
	
		while (i<max)
		{
			if(i==rear)
			{
				break;
			}
			printf("%d\t",a[i]);
			i=(i+1)%max;
		}
	}
}

void main()
{
	printf("enter the max value of queue:");
	scanf("%d",&max);
	int ch;
	int value;
	int r;
	while(1)
	{
		printf("\n1-To check if empty\n2-To check if Full\n3-Enqueue\n4-Dequeue\n5-Display\n6-Exit\n")	;
		printf("Enter your choice:");
                scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Checking if Queue is empty\n");
				r=isEmpty();
				if (r==0)
				{
					printf("The queue is NOT EMPTY!\n");
				}
				break;
			case 2:printf("Checking if Queue is full\n");
				r=isFull();
				if (r==0)
				{
					printf("The queue is NOT FULL!\n");
				}
				break;
			case 3: printf("enter element to be enqueued:");
				scanf("%d",&value);
				enqueue(value);
				break;
			case 4:dequeue();
				break;
			case 5:display();
				break;
			case 6:exit(0);
				break;
			default: printf("invalid choice");
				break;
		}
	}
}
