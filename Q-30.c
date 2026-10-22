#include<stdio.h>
int main()
{
	int num,reverse=0,remainder,original;
	printf("enter an integer");
	scanf("%d",&num);
	original=num;
	while(num!=0)
	{
		remainder=num%10;
		reverse=reverse*10+remainder;
		num/=10;
	}
	printf("the reverse number of %d is %d",original,reverse);
}
