#include<stdio.h>
int main()
{
	int a=10,b=2,c=5,ls;
	ls=(((a<b)&&(a<c))||(b<c))?a:b:c;
	printf("%d",ls);
	
}
