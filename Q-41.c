#include<stdio.h>
int main()
{
	int i,n,isprime=1;
	printf("enter N:");
	scanf("%d",&n);
	if(n<=1)
	{
		printf("%d is neither prime nor composite.\n",n);
		
	}else
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				isprime=0;
				break;
			}
		}	
	}
	if(isprime)
	{
		printf("%d is prime.",n);
	}
	else
	{
		printf("%d is composite.",n);
	}
	return 0;
	
}
