#include<stdio.h>
void main()
{
	int arr[100],i=0,l1,even[100],odd[100],j=0,k=0;
	printf("Enter the length of array 1:");
	scanf("%d",&l1);
	for(i=0;i<l1;i++)
	{
		printf("Enter the element:");
		scanf("%d",&arr[i]);
    }
	for(i=0;i<l1;i++)
	{
		if(arr[i]%2==0)
		{
		 even[j]=arr[i];
		 j=j+1;
		}
		else
		{
		 odd[k]=arr[i];
		 k=k+1;
		}
	}
    for(i=0;i<j;i++)
    {
		printf("%d\t",even[i]);
	}
	printf("\n");
	for(i=0;i<k;i++)
	{
		printf("%d\t",odd[i]);
	}
}
	

