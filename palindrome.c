#include <stdio.h>
#include <string.h>
void main()
{
	char str[100],r[100];
	int l,i;
	printf("Enter the string:");
	gets(str);
	l=strlen(str);
	puts(str);
	for(i=0;i<l;i++)
	{
		r[i]=str[l-1-i];
	}
	r[l]='\0';
	printf("%s is the reversed string\n",r);
	
	if (strcmp(str,r)==0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not palindrome");
	}
}
	
