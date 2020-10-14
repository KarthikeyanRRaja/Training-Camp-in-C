#include<stdio.h>
int fact(int);
int N=0;
int main()
{
	int len,n,Ans;
	scanf("%d",&n);
	for(len=n;len!=0;++N)
	len/=10;
	Ans=Arms(n);
	if(Ans==n)
	printf("%d is a Armstrong Number",n);
	else
	printf("%d is NOT a Armstrong Number",n);
	return 0;
}
int power(int n)
{
	int i,pw=1;
	for(i=1;i<=N;i++)
	{
		pw*=n;
	}
	return pw;
}
int Arms(n)
{
	int arms,reminder;
	if(n==0)
	{
		return 0;
	}
	else
	{ 	
		reminder=n%10;
		arms=power(reminder)+Arms(n/10);
	}
	return arms;
}
