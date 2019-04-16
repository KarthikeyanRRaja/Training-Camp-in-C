#include<stdio.h>
int main(int argc,char *argv[])
{
	int c,s,n,v,j=3,i;
	s=atoi(argv[1]);
	n=atoi(argv[2]);
	int arr[n];
	for(i=0;i<n;i++)
	{
		v=atoi(argv[j]);
		arr[i]=v;
		j+=1;
	}
	
	for(i=0;i<n;i++)
	{
		c=0;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
			if(arr[i]==arr[j])
			{
				c=1;
				break;
			}
			}
		}
		if(c==0)
		{
			printf("%d ",arr[i]);
		}
	}
}
