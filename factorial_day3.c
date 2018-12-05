#include<stdio.h>
int main()
{
	int i,no,fact=1;
	printf("Enter number : ");
	scanf("%d",&no);
	if(no<=7)
	{
		for(i=1;i<=no;i++)
		{
			fact=fact*i;
		}
		printf("%d!=%d",no,fact);
	}
}
