#include<stdio.h>
int main()

{
	int phy,che,math,eng,hindi,total;
	double avg;
	
	printf("Enter Marks of 5 subjects: ");
	scanf("%d%d%d%d%d",&phy,&che,&math,&eng,&hindi);
	
	total=phy+che+math+eng+hindi;
	printf("Total marks:%d\n",total);
	
	avg=total/5.0;
	printf("Averege matks: %1f",avg);
	return 0;
}
