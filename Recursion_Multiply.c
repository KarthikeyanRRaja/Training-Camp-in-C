#include<stdio.h> 
int Mul(int a, int b)  
{ 
   if (b == 0) 
       return 0; 
   if (b % 2 == 0) 
       return Mul(a+a, b/2); 
  
   return Mul(a+a, b/2) + a; 
} 
int main() 
{ int n1,n2;
  printf("Enter two values=");
  scanf("%d%d",&n1,&n2);
  printf("%d", Mul(2, 4)); 
  return 0; 
} 
