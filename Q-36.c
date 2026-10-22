#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number at which up to print odd number:");
	scanf("%d",n);
	printf("series");
	for(i=1;i<=n;i+=2){
	
	printf("%d",i);
	}
	printf("\n");
	return 0;
}
