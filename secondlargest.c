#include<stdio.h>
void main()
{
	int arr[100],i=0,l1,temp,j;
	printf("Enter the length of array 1:");
	scanf("%d",&l1);
	for(i=0;i<l1;i++)
	{
		printf("Enter the element:");
		scanf("%d",&arr[i]);
    }
    for(i=0;i<l1-1;i++)
    {
		for(j=0;j<l1-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
    printf("2nd largest element%d",arr[l1-2]);
}

