#include<stdio.h>
int main()
{
	int n,i,fac=1;
	float sum=0;
	
	printf("enter the value n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fac =fac*i;
		sum=sum+(i/fac);
	}
	printf("sum of series up to%d terms:%f\n",n,sum);
	return 0;
}
