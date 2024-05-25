#include<stdio.h>
#include<stdlib.h>

struct node{
    int coef,expo;
    struct node *link;
};

struct node *phead=NULL,*qhead=NULL,*rhead=NULL,*mhead=NULL;

struct node * readpoly(){
    struct node *temp,*ptr,*head=NULL;
    int n,i;

    printf("\nenter total no of elements of poly  ");
    scanf("%d",&n);
    printf("enter the coefficients and exponent\n");
    for(i=0;i<n;i++){
        printf("enter coef%d & expo%d  ",i+1,i+1);
        temp=(struct node *)malloc(sizeof(struct node));
        scanf("%d%d",&temp->coef,&temp->expo);
        temp->link=NULL;
        if(head==NULL){
            head=temp;
            ptr=head;       //ptr points to last node 
        }
        else{
            ptr->link=temp; 
            ptr=temp;//to point ptr to last node each time we move it as we create new node
        }
    }
    return head;
}

void display(struct node *head){
    struct node * ptr;
    if(head==NULL){
        printf("empty polynomial");
    }
    else{
        ptr=head;
        while(ptr->link!=NULL){
            printf("%dX^%d + ",ptr->coef,ptr->expo);
            ptr=ptr->link;
        }
        printf("%dX^%d",ptr->coef,ptr->expo);
    }
}

struct node * addpoly(){
    struct node *temp,*ptr1,*ptr2,*ptr3,*head=NULL;
    ptr1=phead;    //ptr1,2,3 are used to traverse through the 3 poly. bcz p,q,rhead are heads and shouldn't be moved
    ptr2=qhead;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->expo == ptr2->expo){
            temp=(struct node *)malloc(sizeof(struct node));
            temp->coef=ptr1->coef+ptr2->coef;
            temp->expo=ptr1->expo;
            temp->link=NULL;
            ptr1=ptr1->link;
            ptr2=ptr2->link;
        }
        else if(ptr1->expo > ptr2->expo){
            temp=(struct node *)malloc(sizeof(struct node));
            temp->coef=ptr1->coef;
            temp->expo=ptr1->expo;
            temp->link=NULL;
            ptr1=ptr1->link;
        }
        else{
            temp=(struct node *)malloc(sizeof(struct node));
            temp->coef=ptr2->coef;
            temp->expo=ptr2->expo;
            temp->link=NULL;
            ptr2=ptr2->link;
        }
        //in each iteration a node is created . in the following code it is attached
        if(head==NULL){
            head=temp;
            ptr3=head;
        }
        else{
            ptr3->link=temp;
            ptr3=temp;
        }
    }
    while(ptr1!=NULL){
        temp=(struct node *)malloc(sizeof(struct node));
        temp->coef=ptr1->coef;
        temp->expo=ptr1->expo;
        temp->link=NULL;
        if(head==NULL){
            head=temp;
            ptr3=head;
        }
        else{
            ptr3->link=temp;
            ptr3=temp;
        }
        ptr1=ptr1->link;
    }
    while(ptr2!=NULL){
        temp=(struct node *)malloc(sizeof(struct node));
        temp->coef=ptr2->coef;
        temp->expo=ptr2->expo;
        temp->link=NULL;
        if(head==NULL){
            head=temp;
            ptr3=head;
        }
        else{
            ptr3->link=temp;
            ptr3=temp;
        }
        ptr2=ptr2->link;
    }
    return head;
}

struct node * multiplypoly(){
    struct node *temp,*ptr1,*ptr2,*ptr3=NULL,*head=NULL;
    ptr1=phead;
    ptr2=qhead;
    while(ptr1!=NULL){
        while(ptr2!=NULL){
            temp=(struct node *)malloc(sizeof(struct node));
            temp->coef=ptr1->coef*ptr2->coef;
            temp->expo=ptr1->expo+ptr2->expo;
            temp->link=NULL;
            if(head==NULL){
                head=temp;
                ptr3=head;
            }
            else{
                ptr3->link=temp;
                ptr3=ptr3->link;
            }
            //forming node and linking over.now move pointers
            ptr2=ptr2->link;
        }
        ptr1=ptr1->link;
        ptr2=qhead;
    }
    //removing duplicates
    struct node *a=head,*b=head->link,*prev=head;//prev is just to help point to the prev of q in order to delete it 
    while(a!=NULL){
        prev=a;
        b=a->link;
        while(b!=NULL){
            if(a->expo==b->expo){
                a->coef=a->coef+b->coef;
                prev->link=b->link;
                b=prev->link;
            }
            else{
                prev=b;
                b=b->link;
            }
        }
        a=a->link;
    }
    return head;
}

void main(){
	int op;
    printf("enter the values of 1st poly:");
    phead=readpoly();
    printf("enter the values of 2nd poly:");
    qhead=readpoly(); //fn returns a value of same type as qhead ie struct node *
    
    printf("\ndisplaying 1st poly\n");
    display(phead); //phead and q head are global.but we are still passing it bcz we only have 1 fn for displaying all 3 polys.
    printf("\ndisplaying 2nd poly\n");
    display(qhead);//so we make a mould variable(head) in display fn and replace it by phead qhead and rhead.else we will have to repeat codes for all 3 poly
    printf("\n1.Polynomial Addition  2.Polynomial Multiplication  3.Exit");
    while (1)
    {
	    printf("\nenter choice");
	    scanf("%d",&op);
	    switch(op)
	    {
	    case 1:rhead=addpoly();
		   printf("\nthe sum of polynomials is  ");
		   display(rhead);
		   break;
	    case 2:mhead=multiplypoly();
		   printf("\nthe product is \n");
		   display(mhead);
		   break;
	    case 3:exit(0);
	    }
    }
}
