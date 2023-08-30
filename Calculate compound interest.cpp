#include<stdio.h>
#include<math.h> 
int main()
{
	float p,r,t,cl;
	printf("Entewr principal rate time ");
	scanf("%f%f%f",&p,&r,&t);
	cl=p*(pow((1+r/100),t));
	printf("cl %f",cl);
	return 0;
}
