#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number of terms:");
	scanf("%d",&n);
	
	printf("series:");
	for(i=1;i<=n;i++)
	{
		printf("%d",i*i);
		if(i<n)
		{
			printf(", ");
		}
	}
	printf("\n");
	return 0;
}
