#include<stdio.h>
int main(int argc,char *argv[])
{
	int v,k,i,j;
	v=atoi(argv[1]);
	k=atoi(argv[2]);
	for(i=0;i<k;i++)
	{
		for(j=0;j<v;j++)
		{
			if(i==0||i==k-1||j==0||j==v-1)
			{
				printf("X");
			}
			else if(i==1||i==k-2||j==1||j==v-2)
			{
				printf("O");
			}
			else
			{
				printf("X");
			}
		}
		printf("\n");
	}
}
