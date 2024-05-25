#include<stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("file1.txt","w");
	int age,mobile,n,i;
	char name[100];
	printf("Enter the number of details you wish to input:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the name:");
		scanf("%s",name);
		printf("Enter the age");
		scanf("%d",&age);
		printf("Enter the mobile no:");
		scanf("%d",&mobile);
		fprintf(fp,"%s\t%d\t%d\n",name,age,mobile);
	}
	fclose(fp);
	fp=fopen("file1.txt","r");
	int el=0,f;
	while((fscanf(fp,"%s%d%d",name,&age,&mobile))!=EOF)
	{
	  if(el<age)
		{
			el=age;
		}
	}
	fclose(fp);
	printf("%d",el);
	
	
}

		
		

