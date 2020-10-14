#include<stdio.h>
void Binary(int n) 
{ 
  if(n == 0) 
    return; 
  
  Binary(n/2); 
  printf("%d", n%2); 
}   

int main()
{
	int N;
	printf("Enter a Number=");
	scanf("%d",&N);
	Binary(N); 
}
