#include<stdio.h>
int main()
{
	// w.a.p to print weekend name a\c to user choice???
	int ch;
	printf("Enter user choice :");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1: printf("monday");
		        break;
    	case 2: printf("tuesday");
		        break;
		case 3: printf("wednesday");
		        break;
	 	case 4: printf("thrusday");
		        break;
    	case 5: printf("friday");
		        break;
		case 6: printf("saturday");
		        break;
		case 0: printf("sunday");
		        break;
		default : printf("Invalid User choice");	        
	}
	return 0;
}
