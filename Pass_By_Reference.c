#include<stdio.h>
void Swap(int *,int *);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	Swap(&a,&b);
	printf("Before Swapping\n");
	printf("A = %d\n",a);
	printf("B = %d\n",b);
	printf("After Swapping\n");
	printf("A = %d\n",a);
	printf("B = %d",b);
}

void Swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
