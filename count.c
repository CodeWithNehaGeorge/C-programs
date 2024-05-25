#include <stdio.h>
#include <string.h>
void main()
{
	char str[100];
	int vow=0,con=0,digit=0,space=0,special=0,i=0,l;
	printf("Enter the string:");
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		{
			vow++;
		}
		else if (str[i]>='a'&& str[i]<='z' || str[i]>='A' && str[i]<='Z')
		{
			con++;
		}
		else if (str[i]>='0' && str[i]<='9')
		{
			digit++;
		}
		else if (str[i]==' ')
		{
			space++;
		}
		else
		{
			special++;
		}
	}
	printf("Vowels:%d\n",vow);
	printf("Consonants:%d\n",con);
	printf("Digits:%d\n",digit);
	printf("White spaces%d\n",space);
	printf("Special Characters%d\n",special);
}


			
		 
	
