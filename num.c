#include<stdio.h>
char n[100],p[100];
int i;
void main()
{
	printf("enter input num\n");
	gets(n);
	for(i=0;n[i]!='\0';i++)
	{
		if(n[i]=='4')
		{
			p[i]='1';
			n[i]='3';
		}
		else
		{
			p[i]='0';
		}
	}
	printf("%s+%s\n",n,p);
	
}
				
