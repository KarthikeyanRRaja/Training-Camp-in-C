#include<stdio.h>
int main()
{
	int n1,n2,i,s;
	scanf("%d%d",&n1,&n2);
	for(i=n1+1;i<n2;i++)
	{
		s=i*i;
		printf("\n%d",s);
	}
}
