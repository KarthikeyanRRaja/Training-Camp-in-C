#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	printf("\nEnter two numbers=");
	scanf("%d%d",&a,&b);
	printf("\nENTER +for ADD,- for SUB,* for MUL,/ for DIV,%% for MODULO");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':printf("\nAddition of %d + %d is %d",a,b,(a+b));
				break;
		case 'b':printf("\nSubtraction of %d - %d is %d",a,b,(a-b));
				break;
		case 'c':printf("\nMultiplication of %d + %d is %d",a,b,(a*b));
				break;
		case 'd':printf("\nDivision of %d / %d is %d",a,b,(a/b));
				break;
		case 'e':printf("\nModulo of %d %% %d is %d",a,b,(a%b));
				break;
		default:printf("\nInvalid option");
				break;
	}
	
return 0;
}
