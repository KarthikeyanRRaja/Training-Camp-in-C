#include<stdio.h>
int main()
{
	int i,cc,sum=0,n;
	printf("\nEnter the no : ");
	scanf("%d",&n);
	if(n<=40)
	{
		for(i=1;i<=n;i++)
		{
			cc=pow(i,4);
			sum=sum+cc;
		}
		printf("\n%d",sum);
	}
}
