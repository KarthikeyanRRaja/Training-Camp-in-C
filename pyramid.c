#include<stdio.h>
int main()
{
	int i,j,k,n1,n2,l,prime=0;
	scanf("%d%d",&n1,&n2);
	if ( n1 % 2 == 0)
    {
        n1++;
    }
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			for(k=n1;k<=n2;k=k+2)
			{
				for(l=2;l<=k/2;l++)
				{
					if((k%l)==0)
					{
						prime+=1;
					}
					if(prime==0)
					{
						printf("%d\t",k);
					}
				}
			}
			
		}
		printf("\n");
	}
}
