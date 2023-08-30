#include<stdio.h>
int main()
{
	int a[5],i;
	printf("Enter array elements: ");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nreverse array Elements: ");
	for(i=4;i>0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
