#include<stdio.h>
int main()
{
	char st1[20],st2[20];
	scanf("%s",st1);
	scanf("%s",st2);
	int i,c=0;
	int l=strlen(st1);
	for(i=0;i<l;i++)
	{
		if(st1[i]==st2[0])
		{
			c=1;
			break;
		}
	}
	if(c==1)
	{
		printf("%d",i);
	}
	else
	{
		printf("-1");
	}
}
