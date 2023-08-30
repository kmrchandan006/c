#include<stdio.h>
int main()

{
	// a=10  b=20
	// a=20  b=10
	
	int a,b,temp;
	printf("Enter Tow Number:");
	scanf("%d %d",&a,&b);//a=10 b=20
	
	temp=a;//temp=10
	a=b;//a=20
	b=temp;//b=10
	printf("%d%d",a,b);//20 10
	return 0;
	
}
