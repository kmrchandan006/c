#include<stdio.h>
int main()
{
	// a e i o u...>Vowel
	// remaining all ...> consonant
	
	char ch;
	printf("Enter any charavter:");
	scanf("%c",&ch);
	
	if(ch=='a' || ch=='e'|| ch=='i' || ch=='o' || ch=='u')
	{
		printf("character is vowel");
	}
	else
	{
		printf("character is consonant");	
	}
	return 0;
}
