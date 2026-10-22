#include<stdio.h>
int main()
{
	int num,sum=0;
	while(1)
	{
		printf("enter a number:");
		scanf("%d",&num);
		if(num<0)
		{
			break;
		}
		sum+=num;
	}
	printf("sum of the entered positive number:%d\n",sum);
	return 0;
}
