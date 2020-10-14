#include<stdio.h>
int fact(int);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",fact(n));
	return 0;
}
int fact(n)
{
	int Fact;
	if(n==1)
	{
		return 1;
	}
	else
	{
		Fact=n*fact(n-1);
	}
	return Fact;
}
