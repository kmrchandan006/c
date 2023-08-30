
#include<stdio.h>
int main()
{
	int a,b,ch;
	int add,sub,multi,div,rem;
	
	printf("Enter Two Numbers: ");
	scanf("%d%d",&a,&b);
	
	printf("Enter user choice: ");
	scanf("%d",&ch);
	
	if(ch==1)
	{
		add=a+b;
		printf("addition: %d",add);
	}
	else if(ch==2)
	{
		sub=a-b;
		printf("subtraction: %d",sub);
	}
	else if(ch==3)
	{
		multi=a*b;
	    printf("multiplication: %d",multi);
	}
	else if(ch==4)
	{
		div=a/b;
		printf("Division: %d",div);
	}
	else if(ch==5)
	{
		rem=a%b;
		printf("Remainder: %d",rem);
	}
	else
	{
		printf("Invalid choice..!");
	}
	return 0;
}
