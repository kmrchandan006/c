#include<stdio.h>
int main()
{
	// 1) 1200 1600 2000
	// 2) 2012 2016 2020...2096 and
	// 3) 2100 2200 2300  2500
	int y;
	printf("Enter any year:");
	scanf("%d",&y);
	if(y%400==0 || y%4==0 && y%100!=0)
	{
		printf("year is Leapyear");
	}
	else
	{
		printf("year is not leapyear");
	}
	return 0;	// A --> 65
	// a --> 97
	// space --> 32
	// 0 --> 48	// A --> 65
	// a --> 97
	// space --> 32
	// 0 --> 48	// A --> 65
	// a --> 97
	// space --> 32
	// 0 --> 48	// A --> 65
	// a --> 97
	// space --> 32
	// 0 --> 48	// A --> 65
	// a --> 97
	// space --> 32
	// 0 --> 48	// A --> 65
	// a --> 97
	// space --> 32
	// 0 --> 48	// A --> 65
	// a --> 97
	// space --> 32
	// 0 --> 48
}
