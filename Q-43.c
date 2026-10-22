#include<stdio.h>
int main()
{
	float sale,commision;
	printf("enter sales amount: Rs.");
	scanf("%f",&sale);
	if(sale<=500)
	{
		commision=sale*0.05;
	}
	else if(sale<=2000)
	{
		commision=35+(sale-500)*0.10;
	}
	else if(sale<=5000)
	{
		commision=185+(sale-2000)*0.12;
	}
	else
	{
		commision=sale*0.125;
	}
	printf("commision: rs.%.2f\n",commision);
	return 0;
}
