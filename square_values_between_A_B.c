#include<stdio.h>
#include<math.h>
int main()
{
	double n;
	int i,c;
	for(i=1;i<=10;i++)
	{
		square(i);
	}
}
void square(int n)
{
	int i,v;
	for(i=0;i<n;i++)
	{
		v=i*i;
		if(v==n)
		{
			printf("%d ",v);
			break;
		}
	}
}
