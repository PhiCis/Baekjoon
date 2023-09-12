#include<stdio.h>
int n, q, a[101010], s[101010], x, y;
int main()
{
	scanf("%d%d", &n, &q);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
		s[i]=s[i-1]+a[i];
	}
	for(int i=1;i<=q;i++)
	{
		scanf("%d%d", &x, &y);
		printf("%d\n", s[y]-s[x-1]);
	}
}