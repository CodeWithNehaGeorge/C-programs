#include<stdio.h>
#include<stdlib.h>
int max=5;
struct Node
{
    int data;
    struct Node *link;
};
int count=0;
struct Node *top= NULL;

/*void push(int val)
{
    if (count==max)
    {
        printf("Stack is full");
    }
    else
    {
   
    	struct Node *newNode = malloc(sizeof(struct Node));
    	newNode->data = val;
    	newNode->link = top;
    	top = newNode;
    	count++;
    }
}

void pop()
{
	struct Node *temp;
	if(top == NULL)
        printf("Stack is Empty\n");
    	else
    	{
    	    printf("Poped element = %d\n", top->data);
    	    temp = top;
    	    top = top->link;
    	    count--;
    	}
}

void display()
{
    struct Node *temp = top;
    while(temp != NULL)
    {
         printf("%d\t", temp->data);
         temp = temp->link;
    }
}*/


void push(int value)
{
	ptr=head;
	if(count==max)
	{
		printf("Stack Full");
    }
    else
    {
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=value;
		temp->link=NULL;
		top=temp;
	}
}

void pop()
{
	ptr=head;
	if(top==NULL)
	{
		printf("Underflow");
	}
	else
	{
		while(ptr->link->link!=NULL)
		{
			ptr=ptr->link;
		}
		ptr->link=NULL;
		free(ptr);
		
	}
}











int main()
{
    int op,val;
    printf("Enter value of max:");
    scanf("%d",&max);
    printf("1.PUSH  \n2.POP   \n3.DISPLAY   \n4.EXIT");
    while(1)
    {
        printf("\nEnter choice:");
        scanf("%d",&op);
        switch(op)
        {
            case 1:printf("Enter value:");
                    scanf("%d",&val);
                    push(val);
                    break;
            case 2:pop();
                    break;
            case 3:
                    display();
                    break;
            case 4:exit(0);
        }
    }

}
