#include<stdio.h>
int main()
{
	int a,rem,sum=1;
	scanf("%d",&a);
	while(a!=0)
	{
		sum=sum*a%10;
		a=a/10;
	}
	printf("%d",sum);
}
