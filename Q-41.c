#include<stdio.h>
int main()
{
	int n,i;
	printf(" enter n:");
	scanf("%d",&n);
	printf("factors of %d =",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d",i);
			if(i!=n)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
	return 0;
}
