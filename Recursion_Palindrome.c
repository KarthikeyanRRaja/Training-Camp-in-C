#include<stdio.h>
int rev=0;
int main()
{
	int n,pali;
	printf("Enter a Number=\n");
	scanf("%d",&n);
	pali=Palindrome(n);
	if(pali==n)
	{
		printf("%d is a Palindrome number",n);
	}
	else
	{
		printf("%d is NOT a Palindrome number",n);
	}
}

int Palindrome(int N)
{
	int rem;
	if(N==0)
	{
		return 0;
	}
	else
	{
		rem=N%10;
		rev=(rev*10)+rem;
		Palindrome(N/10);
	}
	return rev;
}
