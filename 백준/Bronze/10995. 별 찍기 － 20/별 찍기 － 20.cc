#include<stdio.h>
int n;
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		if(i&1)
		for(int j=1;j<=n;j++)
		{
			printf("* ");
		}
		else
		for(int j=1;j<=n;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
}