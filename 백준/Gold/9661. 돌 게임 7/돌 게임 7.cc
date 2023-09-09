#include<stdio.h>
/*
int n, i, a[1010];
int main()
{
	for(i=1;i<=1000;i++)
	{
		if(a[i-1]==0||(i-4>=0&&a[i-4]==0)||(i-16>=0&&a[i-16]==0)||(i-64>=0&&a[i-64]==0)||(i-256>=0&&a[i-256]==0)||(i-1024>=0&&a[i-1024]==0))
		{
			a[i]=1;
		}
		else a[i]=0;
	}
	for(i=1;i<=1000;i++)
	{
		printf("%d: %d\n", i, a[i]);
	}
	scanf("%d", &n);
	printf(a[n]==0?"CY":"SK");
}
*/
long long n;
int main()
{
	scanf("%lld", &n);
	printf((n%5==2||n%5==0)?"CY":"SK");
}
