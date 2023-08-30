#include<stdio.h>
int main()
{
	int a,b;
	printf(" Entyer Two Number:");
	scanf("%d%d",&a,&b);
	
	if(a>b)
	{
		printf("maximum number: %d",a);
	}
	else
	{
		printf("maximum number: %d",b);
	}
	return 0;	
}
