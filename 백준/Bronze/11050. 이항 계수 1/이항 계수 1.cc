#include<stdio.h>
int main()
{
	int n, k, i;
	int ans=1;
	scanf("%d%d", &n, &k);
	for(i=1;i<=n;i++)
	{
		ans*=i;
	}
	for(i=1;i<=k;i++)
	{
		ans/=i;
	}
	for(i=1;i<=n-k;i++)
	{
		ans/=i;
	}
	printf("%d", ans);
}