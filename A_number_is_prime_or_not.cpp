#include<stdio.h>
int main()
{
	// input 7 -----< prime number
	int n,count=0,i;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++) 
	{
		if(n%i==0)
	    {
           count++; 	
	    }
    }
    if(count==2)
    printf("prime number");
    else
    printf("Not prime number");
    return 0;
}
