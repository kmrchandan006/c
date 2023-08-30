#include<stdio.h>
int main()
{
	// 0 1 1 3 5 8 ...N
	int n,a=0,b=1,c,i;
	printf("Enter number of Term...");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
