#include<stdio.h>
int main()

{
	// 2 4 6 8 10 .....> even number
	// 1 3 5 7 9 ......> odd number
	
	int n;
	printf("Enter any Number");
	scanf("%d",&n);
	
	if(n%2==0)  
	{
		printf(" Even number");
	}
	else
	{
		printf("Odd Number");
	}
	return 0;
}
