#include<stdio.h>
int n;
void f()
{
	for(int i=1;i<=n;i++)
	{
		printf("*");
	}
	for(int i=1;i<=2*n-3;i++)
	{
		printf(" ");
	}
	for(int i=1;i<=n;i++)
	{
		printf("*");
	}
	printf("\n");
}
int main()
{
	scanf("%d", &n);
	f();
	for(int i=1;i<=n-2;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf(" ");
		}
		printf("*");
		for(int j=1;j<=n-2;j++)
		{
			printf(" ");
		}
		printf("*");
		for(int j=1;j<=2*n-3-2*i;j++)
		{
			printf(" ");
		}
		printf("*");
		for(int j=1;j<=n-2;j++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	for(int i=1;i<=n-1;i++)
	{
		printf(" ");
	}
	printf("*");
	for(int i=1;i<=n-2;i++)
	{
		printf(" ");
	}
	
	printf("*");
	for(int i=1;i<=n-2;i++)
	{
		printf(" ");
	}
	printf("*\n");
	for(int i=n-2;i>=1;i--)
	{
		for(int j=1;j<=i;j++)
		{
			printf(" ");
		}
		printf("*");
		for(int j=1;j<=n-2;j++)
		{
			printf(" ");
		}
		printf("*");
		for(int j=1;j<=2*n-3-2*i;j++)
		{
			printf(" ");
		}
		printf("*");
		for(int j=1;j<=n-2;j++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	f();
	
}