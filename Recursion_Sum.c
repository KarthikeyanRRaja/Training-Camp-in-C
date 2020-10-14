#include <stdio.h>
int Sum;
int sum(int);
int main()
{
    int n;
    scanf("%d",&n);
    printf("Sum of %d is %d",n,sum(n));
    return 0;
}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        Sum=n+sum(n-1);
    }
    return Sum;
}

