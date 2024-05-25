#include <stdio.h>
#include <string.h>
int main()
{
	char str1[100],str2[100];
	int i,l1,l2,j=0;
	printf("Enter the first string:");
	gets(str1);
	printf("Enter the second string:");
	gets(str2);
	printf("%s is the first string \n",str1);
	printf("%s is the second string \n",str2);
	l1=strlen(str1);
	l2=strlen(str2);
	for(i=l1;i<l1+l2;i++)
	{
		str1[i]=str2[j];
		j++;
	}
	str1[l1+l2]='\0';
    printf("%s is the concatenated string",str1);
 }
 
	
