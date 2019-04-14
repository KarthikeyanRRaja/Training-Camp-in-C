#include<stdio.h>
int main()
{
	int t,arr[20],ar[20],k=0,mer[20],i,j;
	for(i=0;i<8;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<8;i++)
	{
		mer[i]=arr[i];
	}
	for(j=i;j<18;j++)
	{
		mer[j]=ar[k];
		k+=1;
	}
	
	for(i=0;i<18;i++)
	{
		for(j=i+1;j<18;j++)
		{
			if(mer[i]==mer[j])
			{
				for(k=j;k<17;k++)
				{
					mer[k]=mer[k+1];
				}
			}
		}
	}
	
	for(i=0;i<17;i++)
	{
		for(j=i+1;j<17;j++)
		{
			if(mer[i]>mer[j])
			{
				t=mer[i];
				mer[i]=mer[j];
				mer[j]=t;
			}
			
		}
	}
	for(i=0;i<12;i++)
	{
		printf("%d ",mer[i]);
	}
	
}
