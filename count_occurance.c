#include<stdio.h>
#include<string.h>
int main()
{
	char n[20],ch,c,al[26];
	int i,j=0,len,n1,n2,diff;
	scanf("%[^\n]s",n);
	len=strlen(n);
	for(i=97;i<=122;i++)
	{
		c=i;
		al[j]=c;
		j++;
	}
	for(i=0;i<len;i++)
	{
		n1=n[i];
		n2=al[i];
		diff=n1-n2;
		al[i]=diff;
	}
	for(i=0;i<26;i++)
	{
		printf("%d ",al[i]);
	}
	
}
