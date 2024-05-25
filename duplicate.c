#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};

struct node *temp,*head=NULL,*ptr,*ptr1,*head1=NULL,*head2=NULL,*ptr2;

void display()
{
 ptr=head;
 while (ptr!=NULL)
 {
   printf("%d\t",ptr->data);
   ptr=ptr->link;
 }
printf("\n");
}

void insertr1(int value)
{
	ptr=head;
	temp=(struct node *)malloc(sizeof(struct node));
	if(head==NULL)
	{
		temp->data=value;
		temp->link=NULL;
		head=temp;
	}
	else
	{
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		}
		temp->data=value;
		temp->link=NULL;
		ptr->link=temp;
	}
	ptr=head;
	 while (ptr!=NULL)
	 {
	   printf("%d\t",ptr->data);
	   ptr=ptr->link;
	 }
	printf("\n");
}



void insertr2(int value)
{
	ptr1=head1;
	temp=(struct node *)malloc(sizeof(struct node));
	if(head1==NULL)
	{
		temp->data=value;
		temp->link=NULL;
		head1=temp;
	}
	else
	{
		while(ptr1->link!=NULL)
		{
			ptr1=ptr1->link;
		}
		temp->data=value;
		temp->link=NULL;
		ptr1->link=temp;
	}
	ptr1=head1;
	 while (ptr1!=NULL)
	 {
	   printf("%d\t",ptr1->data);
	   ptr1=ptr1->link;
	 }
	printf("\n");
	
}


void union2()
{
    ptr = head;
    ptr1 = head1;
    ptr2 = head2;

    // Copy elements from head to head2
    while (ptr != NULL)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = ptr->data;
        temp->link = NULL;

        if (head2 == NULL)
        {
            head2 = temp;
            ptr2 = head2;  // Set ptr2 to the beginning of head2
        }
        else
        {
            temp = (struct node *)malloc(sizeof(struct node));
            temp->data = ptr->data;
            temp->link = NULL;
            ptr2->link = temp;
            ptr2 = ptr2->link;  // Move ptr2 to the newly added node
        }

        ptr = ptr->link;
    }

    // Check for duplicates and insert into head2
    ptr1 = head1;
    while (ptr1 != NULL)
    {
        int flag = 0;
        ptr2 = head2;

        while (ptr2 != NULL)
        {
            if (ptr1->data == ptr2->data)
            {
                flag = 1;
                break;
            }
            ptr2 = ptr2->link;
        }

        if (flag != 1)
        {
            temp = (struct node *)malloc(sizeof(struct node));
            temp->data = ptr1->data;
            temp->link = NULL;

            ptr2 = head2;  // Reset ptr2 to the beginning of head2
            while (ptr2->link != NULL)
            {
                ptr2 = ptr2->link;
            }

            ptr2->link = temp;
        }

        ptr1 = ptr1->link;
    }

    // Display the elements of head2
    ptr2 = head2;
    while (ptr2 != NULL)
    {
        printf("%d\t", ptr2->data);
        ptr2 = ptr2->link;
    }

    printf("\n");
}


void intersection()
{
    ptr = head;
    ptr1 = head1;
    ptr2 = head2;
    while (ptr != NULL)
    {
        ptr1=head1;
        while (ptr1 != NULL)
        {

            if (ptr->data == ptr1->data)
            {
                
                int flag = 0;
                ptr2 = head2;
                while (ptr2 != NULL)
                {
                    if (ptr->data == ptr2->data)
                    {
                        flag = 1;
                        break;
                    }
                    ptr2 = ptr2->link;
                }
                if (flag != 1)
                {
                    temp = (struct node *)malloc(sizeof(struct node));
                    temp->data = ptr1->data;
                    temp->link = NULL;
                    if(head2==NULL)
                    {
						head2 = temp;
                        ptr2 = head2;
                    }
                    else
                    {
						 ptr2 = head2;
						while (ptr2->link != NULL)
						{
							ptr2 = ptr2->link;
						}
						ptr2->link = temp;
					}
                }
            }
            ptr1 = ptr1->link;
        }
        ptr = ptr->link;
    }

    ptr2 = head2;
    while (ptr2 != NULL)
    {
        printf("%d\t", ptr2->data);
        ptr2 = ptr2->link;
    }
    printf("\n");
}


void main()
{
  int ch,v;
  while (1)
  {
    printf("\n1.)LINKed list 1r\n2.)LInked list 2 \n3.)UNION \n4.)INTERSECTION \n5.)EXIT ");
    printf("\nEnter your choice :");
    scanf("%d",&ch);
    switch (ch)
    {
      case 1 :printf("Enter the value to be inserted:");
			  scanf("%d",&v);
              insertr1(v);
              break;
      case 2: printf("Enter the value to be inserted:");
			  scanf("%d",&v);
              insertr2(v);
              break;
      case 3:union2();
             break;
      case 4:intersection();
             break;
      case 5:exit(0);
     }
   }
}
					
					
					
					
	
	
