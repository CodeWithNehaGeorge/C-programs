#include<stdio.h>
#include<string.h>
void main()
{
	char ch1[100],ch2[100];
	int i,j,l1,l2;
	printf("Enter the the string1");
	gets(ch1);
    printf("Enter the the string2");
	gets(ch2);
	l1=strlen(ch1);
	l2=strlen(ch2);
	j=0;
	for(i=l1;i<l1+l2;i++)
	{
		ch1[i]=ch2[j];
		j++;
	}
	ch1[i]='\0';
	printf("concantenated string");
	puts(ch1);
}


