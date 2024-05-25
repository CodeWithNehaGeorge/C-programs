#include<stdio.h>
struct node
{
	int data;
	struct node *link;
};

struct node *head=NULL,*ptr,*temp;

void insertf(int item)
{
	temp=(struct node*)malloc(sizeof(struct node));
	ptr=head;
	if(head==NULL)
	{
		temp->data=item;
		temp->link=temp;
		head=temp;
	}
	else
	{
		while(ptr->link!=head)
		{
			ptr=ptr->link;
		}
		temp->data=item;
		temp->link=head;
		head=temp; 
		ptr->link=head;
	}
}

void insertr(int item)
{
	ptr=head;
	if(head==NULL)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=item;
		temp->link=temp;
		head=temp;
	}
	else
	{
		while(ptr->link!=head)
		{
			ptr=ptr->link;
		}
		temp=(struct node*)malloc(sizeof(struct node));
		temp->data=item;
		temp->link=head;
		ptr->link=temp;
	}
}

void insertp(int item)
{
	ptr=head;
	int key;
	printf("Enter the key after which you like to insert");
	scanf("%d",&key);
	temp=(struct node *)malloc(sizeof(struct node));
    while(ptr->data!=key  && ptr->link!=head )
	{
		ptr=ptr->link;
	}
    if(ptr->data!=key)
    {
		printf("Node not found");
	}
	else 
	{
	    if (ptr->link==head)
		{

			temp->data=item;
			temp->link=head;
			ptr->link=temp;
		}
		else
		{

			temp->data=item;
			temp->link=ptr->link;
			ptr->link=temp;
	    }
    }
	
}


void display()
{
 ptr=head;
 if(head==NULL)
 {
	 printf("empty");
 }
 else
 {while (ptr->link!=head)
 {
   printf("%d\t",ptr->data);
   ptr=ptr->link;
 }
 printf("%d\t",ptr->data);
}
}

void deletef()
{
	ptr=head;
	if(head==NULL)
	{
		printf("Deletion not possible");
	}
	else if(head->link==head)
	{

		free(head);
		head=NULL;
		
	}
	else
	{
		while(ptr->link!=head)
		{
			ptr=ptr->link;
		}
		temp=head;
		head=head->link;
        ptr->link=head;
        free(temp);
	}  
}

void deleter()
{	
	ptr=head;
	if(head==NULL)
	{
		printf("Deletion not possible");
	}
	else if(head->link==head)
	{

		free(head);
		head=NULL;
		
	}
	else
	{
		while(ptr->link->link!=head)
		{
			ptr=ptr->link;
		}
        temp = ptr->link;
        ptr->link = head; 
        free(temp);
		
		
		
	}
}


void deletep()
{	
	ptr=head;
	int key;
	printf("Enter the value you wish to delete:");
	scanf("%d",&key);
	if(head==NULL)
	{
		printf("Deletion not possible");
	}
	else if(head->data==key)
	{

		free(head);
		head=NULL;
		
	}
	else
	{
		while(ptr->link->data!=key && ptr->link != head)
		{
			ptr=ptr->link;
		}
		if(ptr->link==head)
		{
			printf("Node not found");
		}
		else
		{
			temp = ptr->link;
			ptr->link = ptr->link->link; 
			free(temp);
		}
    }
 }
		


		
	








void main()
{
  int op,val;
  printf("1.Rear insert 2.Front insert  3.insert at specified node 4.Rear delete 5.front delete 6.delete specified node 7.forward Display 8.Rear Display 9.exit");
  while(1)
  {
      printf("\nenter choice:");
      scanf("%d",&op);
      switch(op)
      {
        case 1:printf("enter value to insert:");
            scanf("%d",&val);
            insertr(val);
            break;
        case 2:printf("enter value to insert:");
            scanf("%d",&val);
            insertf(val);
            break;
        case 3:printf("enter value to insert:");
            scanf("%d",&val);
            insertp(val);
            break;
        case 4:deleter();
            break;
        case 5:deletef();
            break;
        case 6:deletep();
            break;
        case 7:display();
            break;
        /*case 8:display();
            break;*/
        case 9:exit(0);
      }
   }
}

	

		
		

		
		
