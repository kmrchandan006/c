  #include<stdio.h>
int main()
{
	int sal; double tex;
	printf("Enter salary of person:");
	scanf("%d",&sal);//sal=60000
	
	if(sal<10000) //60000<=10000
	{
		printf("No tax");
	}
	else if(sal>10000 && sal<100000)
	{
		tex=sal*0.10;
		printf("%1f",tex);
	}
	else if(sal>100000 && sal<1000000)
	{
		tex=sal*0.25;
		printf("%1f",tex);
	}
	else
	{
		tex=sal*0.40;
		printf("%1f",tex);
	}
	return 0;
}
