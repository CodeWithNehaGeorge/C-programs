/*#include<stdio.h>
#include<string.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],m,n,i,j,sum=0,k;
	printf("1.Read a matrix");
	printf("2.Sum of two matrices");
	printf("3.Product of two matrices");
	printf("4.Transpose of a matrix");
	printf("5.Display the matrix");
	printf("Enter your choice:");
}

int read(m1)
{
	printf("Enter the number of rows:");
	scanf("%d",&m);
	printf("Enter the number of columns:");
	scanf("%d",&n);
	for(i=0;i<m;i++)
	{
	 for(j=0;j<n;j++)
	 {
		 printf("Enter the number");
		 scanf("%d",&m1[i][j]);
	 }
	}
}

int sum()
{   read(a)
	for(i=0;i<m;i++)
    {
	 sum=sum+a[i][m-1-i];
	}
	printf("%d",sum);
	printf("\n");
}

int product()
{
	int m1,n1,m2,n2;
	printf("Enter the number of rows:");
	scanf("%d",&m1);
	printf("Enter the number of columns:");
	scanf("%d",&n1);
	for(i=0;i<m1;i++)
	{
	 for(j=0;j<n1;j++)
	 {
		 printf("Enter the number");
		 scanf("%d",&a[i][j]);
	 }
	}
	printf("Enter the number of rows:");
	scanf("%d",&m2);
	printf("Enter the number of columns:");
	scanf("%d",&n2);
	for(i=0;i<m2;i++)
	{
	 for(j=0;j<n2;j++)
	 {
		 printf("Enter the number");
		 scanf("%d",&b[i][j]);
	 }
	}
	if(n1==m2)
	{
		for(i=0,i<m1,i++)
		{
			for(j=0,j<n2,j++)
			{
				for(k=0,k<n1,k++)
				{
					c[i][j]=a[i][k]*b[k][i];
				}
			}
		}
	}
	else
	{
		printf("Invalid");
	}
	display(c);
}

int transpose()
{
	read(a);
	for(i=0;i<m1;i++)
	{
	 for(j=0;j<n1;j++)
	 {
		 printf("%d\t",a[i][j]);
	 }
	 printf("\n");
	}
	display(a);
}

int display(m1[10][10])
{
	for(j=0;j<n1;j++)
	{
	 for(i=0;i<m1;i++)
	 {
		 printf("%d\t",a[i][j]);
	 }
	 printf("\n");
	}

	  
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*if(m1==n1)
	{
	for(i=0;i<m1;i++)
	{
	 for(j=0;j<n1;j++)
	 {
		 if(i==j)
		 {
			 sum=sum+a[i][j];
		 }
	 }

	}
	printf("%d",sum);
	printf("\n");
    }*/
    

/*int read(int a[10][10],int m,int n);
int display(int a[10][10],int m,int n);
int transpose(int a[10][10],int m,int n);
int sum(int a[10][10],int b[10][10],int m1,int n1,int m2,int n1);
int multiplication(int a[10][10],int b[10][10],int m1,int n1,int m2,int n1);


void main()
{
	int ch;
	printf("1.ADD\n2.PRODUCT\n3.TRANSPOSE\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	case '1':
	   sum();		
*/		


#include<stdio.h>
void read(int a[10][10],int m,int n);
void display(int a[10][10],int m,int n);
void sum();
void multiply();
void transpose();
void rowsum();
void main()
{
	
	rowsum();
}

void read(int a[10][10],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}	
}

void display(int b[10][10],int m,int n)
{   
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}	
}

void sum()
{
	int c[10][10],a[10][10],b[10][10],m1,n1,m2,n2,i,j;
	printf("Enter the number of rows of matrix 1:");
	scanf("%d",&m1);
	printf("Enter the numebr of columnsof matrix 1:");
	scanf("%d",&n1);
	printf("Enter the number of rows of matrix 2:");
	scanf("%d",&m2);
	printf("Enter the numebr of columnsof matrix 2:");
	scanf("%d",&n2);
	read(a,m1,n1);
	display(a,m1,n1);
	read(b,m2,n2);
	display(b,m2,n2);
	if(m1==m2 && n1==n2)
	{
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}
		}
	}
	else
	{
		printf("Matrix cannot be added");
	}
	display(c,m1,n1);
}

void multiply()
{
	int c[10][10],a[10][10],b[10][10],m1,n1,m2,n2,i,j,k;
	printf("Enter the number of rows of matrix 1:");
	scanf("%d",&m1);
	printf("Enter the numebr of columnsof matrix 1:");
	scanf("%d",&n1);
	printf("Enter the number of rows of matrix 2:");
	scanf("%d",&m2);
	printf("Enter the numebr of columnsof matrix 2:");
	scanf("%d",&n2);
	read(a,m1,n1);
	display(a,m1,n1);
	read(b,m2,n2);
	display(b,m2,n2);
	if(m2==n1)
	{
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n2;j++)
			{   
				c[i][j]=0;
				for(k=0;k<n1;k++)
				{
					c[i][j]=c[i][j]+a[i][k]*b[k][j];
				}
			}
		}
	}
	else
	{
		printf("They cannot be multiplied");
	}
	display(c,m1,n2);
}

void transpose()
{   
	int i,j,a[10][10],m,n;
	printf("Enter the number of rows of matrix 1:");
	scanf("%d",&m);
	printf("Enter the numebr of columnsof matrix 1:");
	scanf("%d",&n);
	read(a,m,n);
	display(a,m,n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}	
}
void rowsum()
{   
	int i,j,a[10][10],m,n,sum=0;
	printf("Enter the number of rows of matrix 1:");
	scanf("%d",&m);
	printf("Enter the numebr of columnsof matrix 1:");
	scanf("%d",&n);
	read(a,m,n);
	display(a,m,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			sum=sum+a[i][j];
		}
		printf("%d\t",sum);
		printf("\n");
		sum=0;
	}
}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*printf("Enter the number of rows:");
	scanf("%d",&m2);
	printf("Enter the number of columns:");
	scanf("%d",&n2);
	for(i=0;i<m2;i++)
	{
	 for(j=0;j<n2;j++)
	 {
		 printf("Enter the number");
		 scanf("%d",&b[i][j]);
	 }
	}
	
	
	for(i=0;i<m2;i++)
	{
	 for(j=0;j<n2;j++)
	 {
		 printf("%d\t",b[i][j]);
	 }
	 printf("\n");
	}

	if(m1==m2 && n1==n2)
	{
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}
		}
	}
	
	for(i=0;i<m2;i++)
	{
	 for(j=0;j<n2;j++)
	 {
		 printf("%d\t",c[i][j]);
	 }
	 printf("\n");
	}
}*/



	
	
	  
	
	

		

	
	
		
		
