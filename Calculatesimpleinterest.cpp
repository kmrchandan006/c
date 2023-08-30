 #include<stdio.h>
 int main()
 {
 	float amt,rate,time,si;
 	printf("Enter The amount:");
 	scanf("%f",&amt);
 	printf("Enter the rate:");
 	scanf("%f",&rate);
 	printf("Enter The Time:");
 	scanf("%f",&time);
 	si=(amt*rate*time)/10;
 	printf("simple intrest=%f",si);
 	return 0;
 }
