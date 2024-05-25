#include<stdio.h>
void main()
{
	int arr1[100],arr2[100],arr3[100],i=0,l1,l2,num,r,k;
	printf("Enter the length of array 1:");
	scanf("%d",&l1);
	for(i=0;i<l1;i++)
	{
		printf("Enter the element:");
		scanf("%d",&num);
		arr1[i]=num;
	}
	printf("Enter the length of array 2:");
	scanf("%d",&l2);
	for(i=0;i<l2;i++)
	{
		printf("Enter the element:");
		scanf("%d",&num);
		arr2[i]=num;
	}
	r=l1+l2;
	printf("Array 1\n");
	for(i=0;i<l1;i++)
	{
		printf("%d\t",arr1[i]);
		arr3[i]=arr1[i];
	}
	printf("\nArray 2\n");
	k=0;
	for(i=l1;i<r;i++)
	{ 
		printf("%d\t",arr2[k]);
		arr3[i]=arr2[k];
		k++;
	}
	for(i=0;i<r;i++)
	{
		printf("%d\t",arr3[i]);
	}
}
		
		

	
	

