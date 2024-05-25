#include<stdio.h>
void main()
{
	int n,temp,s=0,i;
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;
	for(i=1;i<n;i++)
	{
		if((n%i)==0)
		{
			s=s+i;
		}
	}
	FILE *fp;
	fp=fopen("file1.txt","w");
	if(temp==s)
	{   
	 fprintf(fp,"%d",s);
	    
	}
	fclose(fp);
}
	
		
