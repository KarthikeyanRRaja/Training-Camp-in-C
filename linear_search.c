#include<stdio.h>
int main()
{
	int a[5],i,search,c=0;
	for(i=0;i<5;i++)
	{
		printf("\nEnter a number : ");
		scanf("%d",&a[i]);
	}
	printf("\nEnter the number to be searched : ");
	scanf("%d",&search);
	for(i=0;i<5;i++)
	{
		if(a[i]==search)
		{
			printf("\nThe number %d appears in the First five numbers",search);
			c+=1;
		}
	}
	if(c==0)
	 printf("\nThe number %d does not appears in the First five numbers",search);
}
