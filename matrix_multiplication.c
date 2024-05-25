#include<stdio.h>
void main()
{
    int r1,c1,r2,c2,a[10][10],b[10][10],c[10][10],i,j,num,sum=0;
    printf("enter the number of rows of matrix 1:");
    scanf("%d",&r1);
    printf("Enter the number of columns of matrix 1:");
    scanf("%d",&c1);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("Enter the element:");
            scanf("%d",&num);
            a[i][j]=num;
        }
    }
    
    for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        } 
   
    printf("enter the number of rows of matrix 2:");
    scanf("%d",&r2);
    printf("Enter the number of columns of matrix 2:");
    scanf("%d",&c2);
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("Enter the element:");
            scanf("%d",&num);
            b[i][j]=num;
        }
    }
    
     for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
    
    if(c1==r2)
    {
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                for(k=0,k<r2,k++)
                {
					sum=sum+a[i][k]*b[k][j];
				}
			c[i][j]=sum;
			sum=0	
            }
        }
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("The martices are not conformable for multiplication");
    }
    
        
} 
