#include<stdio.h>
void main()
{
	char ch;
	int pos;
	FILE *fp1,*fp2;
	fp1=fopen("file1.txt","r");
	fp2=fopen("file2.txt","a");
	while((ch=getc(fp1))!=EOF)
	{
	    pos=ftell(fp1);
		printf("%d",pos);
		putc(ch,fp2);
	}
		pos=ftell(fp1);
		printf("%d",pos);
	fclose(fp1);
	fclose(fp2);
	
		
		
}
