#include<stdio.h>
int main()
	
{
	// input 5 ----> 5 10 15 20 25 30 35 ....
	int n,i;
	printf("Enter any Number:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
    } 
	return 0;
}
	 

