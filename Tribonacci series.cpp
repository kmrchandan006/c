#include<stdio.h>
int main()
{
	// 0 1 2 3 6 11 20 37 ....N
	int n,a=0,b=1,c=2,d,i;
	printf("Enter Term: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",a);
		d=a+b+c;
		a=b;
		b=c;
		c=d;
	}
	return 0;
}
