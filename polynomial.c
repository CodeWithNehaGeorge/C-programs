
#include <stdio.h>

struct poly
{
 int coeff;
 int expo;
}r[20],p1[10],p2[10];

void create(struct poly p[],int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  printf("Enter the coefficient:");
  scanf("%d",&p[i].coeff);
  printf("Enter the exponent:");
  scanf("%d",&p[i].expo);
 }
}


void add(struct poly p1[],struct poly p2[],int n1,int n2)
{
 int i=0,j=0,k=0;
 while(i<n1 && j<n2)
 {
	if(p1[i].expo>p2[j].expo)
	 {
	  r[k].coeff=p1[i].coeff;
	  r[k].expo=p1[i].expo;
	  i++;
	  k++;
	 }
	 else if(p1[i].expo<p2[j].expo)
	 {
	  r[k].coeff=p2[j].coeff;
	  r[k].expo=p2[j].expo;
	  j++;
	  k++;
	 }
	 else
	 {
	  r[k].coeff=p1[i].coeff+p2[j].coeff;
	  r[k].expo=p1[i].expo;
	  i++;
	  j++;
	  k++;
	 }
 }
 while(i<n1)
 {
  r[k].coeff=p1[i].coeff;
  r[k].expo=p1[i].expo;
  i++;
  k++; 
 }
 while(j<n2)
 {
  r[k].coeff=p2[j].coeff;
  r[k].expo=p2[j].expo;
  j++;
  k++; 
 }
 display(r,k);
 printf("\n");
}


void display(struct poly p[],int k)
{
 int i;
 for(i=0;i<k;i++)
 {
  printf("%dx^%d",p[i].coeff,p[i].expo);
  if(i<k-1)
  {
   printf("+");
  }
 }
}
 
 

void main()
{
 int ch,n1,n2;
 while(1)
 {
	 printf("\n1.Create polynomial 1\n");
	 printf("2.Create polynomial 2\n");
	 printf("3.Addition of 2 polynomials\n");
	 printf("4.Exit");
	 printf("\nEnter your choice:");
	 scanf("%d",&ch);
	 switch(ch)
	 {
	  case 1:printf("Enter the number of terms of polynomial 1:");
		 scanf("%d",&n1);
		 create(p1,n1);
		 break;
	  case 2:printf("Enter the number of terms of polynomial 2:");
		 scanf("%d",&n2);
		 create(p2,n2);
		 break;
	  case 3:add(p1,p2,n1,n2);
		 break;
	  case 4:return(0);
         }
 }
}
