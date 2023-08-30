#include<stdio.h>
int main()
{
	// input 121 <--->  121
	int n,r,s=0,c;
	printf("Enter any number:");
	scanf("%d",&n);
	c=n;
	while(n>0)
	{
		r=n%10;
	    s=r+(s*10);
	    n=n/10;
	}
	if(c==s)
	printf("ralindrome number");
	else
	printf("Not");
	return 0;
}
