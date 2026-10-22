#include<stdio.h>
int main()
{
	int n,val,max,min,i;
	printf("enter total count of number:");
	scanf("%d",&n);
	if(n<=0)
	return 0;
	printf("enter number 1:");
	scanf("%d",&val);
	max=min=val;
	for(i=1;i<n;i++)
	{
		printf("enter number %d:",i+1);
		scanf("%d",&val);
		if(val>max) max=val;
		if(val<min) min=val;
	}
	printf("maximum :%d\nminimum: %d",max,min);
}
