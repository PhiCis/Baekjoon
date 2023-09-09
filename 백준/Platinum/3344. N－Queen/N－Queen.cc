#include<stdio.h>
int n, tmp;
int main()
{
	scanf("%d", &n);
	if(n%6==1||n%6==5)
	{
		for(int i=0;i<n;i++)
		{
			printf("%d\n", (2*i)%n+1);
		}
	}
	if(n%6==0||n%6==4)
	{
		for(int i=1;i<=n/2;i++)
		{
			printf("%d\n", 2*i);
		}
		for(int i=1;i<=n/2;i++)
		{
			printf("%d\n", 2*i-1);
		}
	}
	if(n%6==2)
	{
		for(int i=1;i<=n/2;i++)
		{
			printf("%d\n", 2*i);
		}
		printf("3\n1\n");
		for(int i=4;i<=n/2;i++)
		{
			printf("%d\n", 2*i-1);
		}
		printf("5\n");
	}
	if(n%6==3)
	{
		for(int i=2;i<=n/2;i++)
		{
			printf("%d\n", 2*i);
		}
		printf("2\n");
		for(int i=3;i<=n/2+1;i++)
		{
			printf("%d\n", 2*i-1);
		}
		printf("1\n3\n");
	}
	
}