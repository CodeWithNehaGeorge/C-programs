#include<stdio.h>
#include<stdlib.h>
int s[50],max,top=-1;

void pop()
{
    if(top==-1)
    {
        printf("stack underflow");
    }
    else
    {
        printf("%d",s[top]);
        top--;
    }
}

void push(int value)
{
    if(top>=max-1)
    {
        printf("Stack overflow");
    }
    else
    {
        top++;
        s[top]=value;
    }
}

void main()
{
    int ch,i,n;
    printf("Enter the limit of the array:");
    scanf("%d",&max);
    while(1)
    {
        printf("1.Insert an element");
        printf("2.Delete an element");
        printf("3.Display");
        printf("4.Exit");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter the value you wish to input:");
                   scanf("%d",&n);
                   push(n);
                   break;
            case 2:pop();
                   break;
            case 3:printf("Array");
                   for(i=0;i<top;i++)
                   {
                    printf("%d",s[i]);
                   }
                   break;
            case 4:exit(0);
        }
    }
}


