#include<stdio.h>
int main()
{
	int num,originialnum,remainder,result=0,n=0;
	printf("enter an integer:");
	scanf("%d",&num);
	
	originialnum =num;
	while(originialnum!=0)
	{
		originialnum/=10;
		++n;
	}	
	originialnum=num;
	while(originialnum!=0)
	{
		remainder=originialnum%10;
		int power=1;
		int i;
		for(i=0;i<n;i++)
		{
			power*=remainder;
		}
		result+=power;
		originialnum/=10;
	}
	if(result==num)
	{
		printf("%d is an armstrong number\n",num);
	}
	else
	{
		printf("%d is not  an armstrong number\n",num);
	}	
}
