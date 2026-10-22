#include<stdio.h>
int main()
{
	int i,num;
	int j=1;
	printf("enter a number");
	scanf("%d",&num);
	while(j<=10)
	{
		i=num*j;
		printf("\n%d * %d=%d",j,num,i);
		j++;
	}
	return 0;
}
