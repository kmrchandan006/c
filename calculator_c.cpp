#include<stdio.h>
int main()
{
	float a,b,c;
	char ch;
	printf("Enter first number :");
	scanf("%f",&a);
	printf("Enter user choice to perform operation:");
	scanf(" %c",&ch);
	printf("Enter second number:");
	scanf("%f",&b);
	switch(ch)
	{
		case'+':c=a+b;
		        printf("output=%f",c);
		        break;
		case'-':c=a-b;
		        printf("output=%f",c);
		        break;
		case'*':c=a*b;
		        printf("output=%f",c);
		        break;
		case'/':c=a/b;
		        printf("output=%f",c);
		        break;
		default:printf("invalid operation");
		        break;
		
	} 
	return 0;
	
}
