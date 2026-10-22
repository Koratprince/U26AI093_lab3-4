#include<stdio.h>
int main()
{
	int n,sumeven=0,sumodd=0,i;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		sumeven+=i;
		}
		else
		{
		sumodd+=i;
		}
	}
	printf("sum of even: %d\n sum of odd :%d\n",sumeven,sumodd);
}
