#include<stdio.h>
int main()
{
	float unit,bill;
	printf("enter unit consumed:");
	scanf("%f",&unit);
	if(unit<=200)
	{
		bill=unit*0.50;
	}
	else if(unit<=400)
	{
		bill=100+(unit-200)*0.65;
	}
	else if(unit<=600)
	{
		bill=230+(unit-400)*0.80;
	}
	else
	{
		bill=425+(unit-600)*1.25;
	}
	printf("total aount to be paid:Rs.%.2f\n",bill);
	return 0;
}
