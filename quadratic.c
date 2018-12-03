#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,val,neg,add;
	float div,sqr,sub,div1;
	scanf("%f%f%f",&a,&b,&c);
	val=(b*b)-(4*a*c);
	sqr=sqrt(val);
	add=(-b)+sqr;
	sub=(-b)-sqr;
	div=add/(2*a);
	div1=sub/(2*a);
	printf("Real=%f",div);
	printf("\nImaginary=%fi",div1);
}

