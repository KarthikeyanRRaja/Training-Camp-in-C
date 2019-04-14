#include<stdio.h>
int main()
{
	int i,j,t,arr[4];
	for(i=0;i<4;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(arr[i]>arr[j])
			{
				t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
			
		}
	}
	for(i=3;i>=(4/2);i--)
	{
		printf("%d %d ",arr[i],arr[3-i]);
	}
	
}
