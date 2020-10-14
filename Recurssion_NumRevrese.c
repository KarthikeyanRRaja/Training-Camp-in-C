#include<stdio.h>
int reverse(int);
int rev=0;
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",reverse(n));
	return 0;
}
int reverse(n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		rev=(rev*10) + (n%10);
		reverse(n/10);
	}
	return rev;
}
