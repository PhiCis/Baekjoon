#include<stdio.h>
int n, k, a, b, c[101], ans;
int main()
{
	scanf("%d%d", &n, &k);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d", &a, &b);
		c[a*6+b]++;
	}
	for(int i=1;i<=12;i++)
	{
		ans+=(c[i]+k-1)/k;
	}
	printf("%d", ans);
}