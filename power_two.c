#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("\nEnter the number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n==pow(2,i))
		{
			count=1;
		}
		
	}
	if(count==1)
	{
		printf("\n%d is a power of 2",n);
	}
	else
	{
		printf("\n%d is not a power of 2",n);
	}
}
