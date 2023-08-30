#include<stdio.h>
int main()
{
	int cp,sp,p,l;
	printf(" Enter cost price:");
	scanf("%d",&cp);
	printf("Enter selling price: ");
	scanf("%d",&sp);
	p=sp-cp;
	l=cp-sp;
	if(sp==cp)
	printf("No any profit and loss");
	else if(sp>cp)
	printf("profit=%d",p);
	else
	printf("loss=%d",l);
	return 0;
	
}
