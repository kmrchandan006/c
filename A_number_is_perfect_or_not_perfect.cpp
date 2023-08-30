#include<stdio.h>
int main()
{
	//input 6--> 1+2+3=6
	int n,sum=0,i;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{    if(n%i==0)
		{
			sum=sum+i;
		}
		 
	}
	if(sum==n)
	printf("perfect number");
	else
	printf("Not perfect number ");
	return 0;
	
}
