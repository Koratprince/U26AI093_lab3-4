#include<stdio.h>
int main()
{
	int x,n,y;
	printf("enter the value of n :");
	scanf("%d",&n);
	printf("enter the value of x:");
	scanf("%d",&x);
	if(n==1)
	{
	y=1+x;
	}
	else if(n==2)
	{
	y=1+(x/n);
	}
	else if(n==3)
	{ int power=1;
	int i;
	for(i=0;i<n;i++)
	{
		power*=x;
	}
	y=1+power;
	}
	
	else
	{
		1+(n*x);
	}
	printf(" the value of Y is=%d",y);
	
}
