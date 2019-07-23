#include<stdio.h>
int main(int argc,char *argv[])
{
	int i,j,v,k=1;
	v=atoi(argv[1]);
	for(i=1;i<=v;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",k);
			k=k+1;
		}
		printf("\n");
	}
	
}
