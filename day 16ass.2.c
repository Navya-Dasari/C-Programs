#include<stdio.h>
main()
{
	int i=1,n,k,y,even,odd,a=0,b,c=0,d;
	scanf("%d ",&n);
	scanf(" %d",&k);
	while(i<=n)
	{
	
		y=k*i;
		if(y<=n)
		{
			printf("%d ",y);
			if(y%2==0)
			{
				b=a+y;	
				a=b;
			}
			else
			{
				d=c+y;
				c=d;
			}
		}
		
		i++;
	}
	printf("Even Sum :%d",a);
	printf("Odd Sum :%d",c);
}
