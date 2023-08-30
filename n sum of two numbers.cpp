  #include<stdio.h>
  int main()
  {
  	int n,a,b,f=1,i,ch;
  	printf("Enter user chice :");
  	scanf("%d",&ch);
  	switch(ch)
  	{
  		case 1: printf("Enter any no. :");
  		        scanf("%d",&n);
  		        for(i=1;i<=n;i++)
  		        {
  		        	printf("%d ",i);
			    }
			    break;
		case 2: printf("Enter two no. :");
			    scanf("%d%d",&a,&b);
			    n=a+b;
			    {
			        printf(" sum=%d ",n);
                } 
			    break;
		case 3: printf("Enter any no. :");
			    scanf("%d",&n);
			    for(i=1;i<=n;i++)
			    f=f*i;  
				{
			      	printf(" Factorial=%d ",f);
			    } 
				break;
				default:printf("invalid user choice");
				break;
				
	}
  	return 0;
  }
