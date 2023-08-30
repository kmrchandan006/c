#include<stdio.h>
#include<stdlib.h>

int get_1st_Weekday(int year){
	
	int day;
	day = (((year -1)*365) + ((year - 1) / 4) - ((year - 1) / 100) + ((year ) / 400) + 1) % 7;
	return day;
}
int main()
{
	system("color 3F");
	int year,month,day,daysInMonth,WeekDay=0,startingDay;
	printf("\Eenter your desired year:");
	scanf("%d",&year);
	
	char *months[]={"january","February","March","April","May","June","July","August","september","October","November","December"};
	int monthDay[]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	if((year%4==0&&year%100!=0) ||year%400==0)
	   monthDay[1]=29;
	   
	startingDay=get_1st_Weekday(year);
	
	for(month=0;month<12;month++) {
		
		daysInMonth=monthDay[month];
		printf("\n\n-----------------%s----------------\n",months[month]);
		printf("\n  Sum  Mon  Tue  Wed  Thu  Fri  Sat\n");
		
		for(WeekDay=0;WeekDay<startingDay;WeekDay++)
		printf("     ");
		
		for(day=1;day<=daysInMonth;day++) {
		
			printf("%5d",day); 
				
			if(++WeekDay>6) {
			
				printf("\n");
				WeekDay=0;
			}
			startingDay=WeekDay;
		}
	}
}
