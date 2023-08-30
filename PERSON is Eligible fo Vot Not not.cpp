#include<stdio.h>
int main()
{
	//age>=18 ....> Voting Eligible
   //agee<=18 ....> not Eligible
   
   int age;
   printf("Enter age:");
   scanf("%d",&age);
   
   if(age>=18)
   {
       printf(" Eligible for Voting");
   }
   else
   {
   	  printf(" Not Eligible fo Voting");
   }
   return 0;
}
   
