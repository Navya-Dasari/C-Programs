#include<stdio.h>
void main()
{
	int i,n,j=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			j++;

		}
	}
		if(j==2)
		{
			printf("Prime");	
		}		
		else
		{
			printf("\nNot prime");
		}
	return 0;
}
