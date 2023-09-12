#include<stdio.h>
int a[20000010];
int n, m, i, t;
int main()
{
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%d", &t);
		a[t+10000000]++;
	}
	scanf("%d", &m);
	for(i=1;i<=m;i++)
	{
		scanf("%d", &t);
		printf("%d ", a[t+10000000]);
	}
}