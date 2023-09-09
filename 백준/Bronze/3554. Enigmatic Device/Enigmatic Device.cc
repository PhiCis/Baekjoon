#include<bits/stdc++.h>
using namespace std;
const int mod = 2010;

int a[50050], n, m;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	for(int i=1;i<=m;i++)
	{
		int x, l, r;
		scanf("%d", &x);
		if(x==1)
		{
			scanf("%d%d", &l, &r);
			for(int j=l;j<=r;j++)
			{
				a[j]*=a[j];
				a[j]%=mod;
			}
		}
		else
		{
			scanf("%d%d", &l, &r);
			int ans = 0;
			for(int j=l;j<=r;j++)
			{
				ans+=a[j];
			}
			printf("%d\n", ans);
		}
	}
}