#include<stdio.h>
int main()
{
	int p,m,c,tot,mpt;
	printf("\nEnter marks of maths,physics chemistry=");
	scanf("%d%d%d",&m,&p,&c);
	if(m>=65)
		if(p>=55)
			if(c>=50)
				{
					tot=p+m+c;
					mpt=m+p;
				}
					if(tot>=180)
				      printf("\nEligible");
				      else
				      	printf("\nNot eliglible");
				    if(mpt>=140)
				     	printf("\nEligible");
				    else
				    	printf("\nNot Eligible");
				
		    	
}
