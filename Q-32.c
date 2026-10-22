#include<stdio.h>
int main()
{
	int n,val,max,secmax,i;
	printf("enter total number of count:");
	scanf("%d",&n);
	if(n<2)
	{
		printf("please enter atleast two number");
	}
	printf("enter number 1:");
	scanf("%d",&max);
	printf("enter number 2:");
	scanf("%d",&val);
	if(val>max)
	{
		secmax=max;
		max=val;
	}
	else
	{
		secmax=val;
	}
	for(i=2;i<n;i++)
	{
		printf("enter number %d:",i+1);
		scanf("%d",&val);
		if(val>max)
	{
		secmax=max;
		max=val;
	}
	else if(val>secmax)
	{
		secmax=val;
	}
	}
	printf("maximum number:%d\n",max);
	printf("second maximum number:%d\n",secmax);
}
