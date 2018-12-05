#include<stdio.h>
int main()
{
	char name[20]="Ashwin";
	int i,len;
	len=strlen(name);
	for(i=len;i>=0;i--)
	{
		printf("%c",name[i]);
	}
	
}
