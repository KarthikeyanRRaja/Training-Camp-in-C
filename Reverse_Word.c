#include<stdio.h>
int main()
{
	int i,k=0,s=0,j,p=0;
	char str[50],st[50],tem[50];
	scanf("%[^\n]s",str);
	int l=strlen(str);
	for(i=l-1;i>=0;i--)
	{
		st[k]=str[i];
		k+=1;
	}
	printf("%d\n",l);
	printf("%c\n",st[l]);
	for(i=0;i<=l;i++)
	{
		if(st[i]==' ')
		{
			for(j=i;j>=s;j--)
			{
				tem[p]=st[j];
				p=p+1;
			}
			s=i;
			printf("%d\n",s);
			//printf("%d\n",p);
		}
		if(st[i]=='\0')
		{
			for(j=i;j>=s;j--)
			{
				tem[p]=st[j];
				p=p+1;
			}
			s=i;
			printf("%d\n",s);
			//printf("%d\n",p);
		}
	}
	printf("%d\n",i);
	for(i=0;i<p;i++)
	{
		printf("%c",tem[i]);
	}
	
}
