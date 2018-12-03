#include<stdio.h>
#define pi 3.14
int main()
{
	float r,area,cir;
	scanf("%f",&r);
	area=pi*(r*r);
	cir=2*pi*r;
	printf("Area=%f\nCircumference=%f",area,cir);
}
