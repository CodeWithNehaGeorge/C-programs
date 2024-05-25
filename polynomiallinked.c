#include<stdio.h>
#include<stdlib.h>
void add(void);
struct node
{
  int coeff;
  int exp;
  struct node *link;
};
struct node *ptr,*ptr1,*ptr3,*temp,*head1=NULL,*head2=NULL,*head3=NULL,*p1,*p2,*p3,*tail3;
void create1()
{
  temp=(struct node *)malloc(sizeof(struct node));
  printf("Enter coefficiant and exponent respectively :\t");
  scanf("%d",&temp->coeff);
  scanf("%d",&temp->exp);
  temp->link=NULL;
  if (head1==NULL)
  {
   
    head1=temp;
  }
  else
  {
    ptr=head1;
    while(ptr->link!=NULL)
    {
      ptr=ptr->link;
    }
    ptr->link=temp;
  }
}
void create2()
{
 temp=(struct node *)malloc(sizeof(struct node));
  printf("Enter coefficiant and exponent respectively :\t");
  scanf("%d",&temp->coeff);
  scanf("%d",&temp->exp);
  temp->link=NULL;
  if (head2==NULL)
  {
   
    head2=temp;
  }
  else
  {
    ptr1=head2;
    while(ptr1->link!=NULL)
    {
      ptr1=ptr1->link;
    }
    ptr1->link=temp;
  }
}
void display(int val)
{ if (val==1)
  {
   ptr=head1;
  }
  else if(val==2)
  {
    ptr=head2;
  }
  else
  ptr=head3;
  while (ptr!=NULL)
  {
    printf("%dx^%d+",ptr->coeff,ptr->exp);
    ptr=ptr->link;
  }
}
void main()
{
  int ch;
  int n,m;
  while(ch!=5)
  {
  printf("Enter your choice 1.Create 1st polynomail\n2.Create 2nd polynomial\n3.Add polynomials\n4.Mutiply polynomials\n5.Exit");
  scanf("%d",&ch);
 
  switch(ch)
  {
    case 1:printf("enter no of terms of polynomial:");
           scanf("%d",&n);
           for (int i=0;i<n;i++)
           {
             create1();
           }
           display(1);
           break;
    case 2:printf("enter no of terms of polynomial:");
           scanf("%d",&m);
           for (int i=0;i<m;i++)
           {
             create2();
           }
           display(2);
           break;
    case 3: add();
            display(3);
            break;
           
           
   
  }
 
  }
}
void add()
{
 
  ptr=head1;
  ptr1=head2;
 
    while((ptr!=NULL) && (ptr1!=NULL))
  {
  temp=(struct node *)malloc(sizeof(struct node));
  if(head3==NULL)
  {
   head3=temp;
   tail3=temp;
   tail3->link=NULL;
   
   }
   else
   {
   tail3->link=temp;
   tail3=temp;
   tail3->link=NULL;
   }
     
    if (ptr->exp>ptr1->exp)
    {
   
      temp->coeff=ptr->coeff;
      temp->exp=ptr->exp;
      ptr=ptr->link;
    }
    else if (ptr->exp<ptr1->exp)
    {
   
      temp->coeff=ptr1->coeff;
      temp->exp=ptr1->exp;
      ptr1=ptr->link;
     
    }
    else
    {
   
      if((ptr->coeff+ptr1->coeff)!=0)
      {
      temp->coeff=ptr->coeff+ptr1->coeff;
      temp->exp=ptr->exp;
      }
      ptr=ptr->link;
      ptr1=ptr1->link;
    }
   
    }
    temp=(struct node *)malloc(sizeof(struct node));
    while(ptr!=NULL)
    {
     
      temp->coeff=ptr->coeff;
      temp->exp=ptr->exp;
      temp->link=NULL;
      ptr=ptr->link;
      tail3->link=temp;
      tail3=temp;
     }
     while(ptr1!=NULL)
    {
     
      temp->coeff=ptr1->coeff;
      temp->exp=ptr1->exp;
      temp->link=NULL;
      ptr1=ptr1->link;
      tail3->link=temp;
      tail3=temp;
     }
     
   
  }
