#include<stdio.h>
int main()
{
	int a,b,ch;
	printf("\nEnter two numbers=");
	scanf("%d%d",&a,&b);
	printf("\nENTER +for ADD,- for SUB,* for MUL,/ for DIV,% for MODULO");
	scanf("%d",&ch);
	switch(ch)
	{
		case '+':printf("\nAddition of %d + %d is %d",a,b,(a+b));break;
		case '-':printf("\nSubtraction of %d - %d is %d",a,b,(a-b));break;
		case '*':printf("\nMultiplication of %d + %d is %d",a,b,(a*b));break;
		case '/':printf("\nDivision of %d / %d is %d",a,b,(a/b));break;
		case '%':printf("\nModulo of %d %% %d is %d",a,b,(a%b));break;
	}
	

}
