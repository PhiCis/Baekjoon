#include<bits/stdc++.h>
using namespace std;

int n, m, a[50], d[50], ans=1;

int main()
{
	d[0]=1; d[1]=1;
	for(int i=2;i<=40;i++)
	{
		d[i]=d[i-1]+d[i-2];
	}
	scanf("%d", &n);
	scanf("%d", &m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d", &a[i]);
	}
	a[m+1]=n+1;
	for(int i=1;i<=m+1;i++)
	{
		ans*=d[a[i]-a[i-1]-1];
	}
	printf("%d", ans);
}