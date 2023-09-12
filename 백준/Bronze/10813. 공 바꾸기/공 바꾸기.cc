#include<bits/stdc++.h>
using namespace std;

int n, m, a[110];

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=n;i++)
	{
		a[i]=i;
	}
	for(int i=1;i<=m;i++)
	{
		int c, b;
		scanf("%d%d", &c, &b);
		swap(a[c], a[b]);
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d ", a[i]);
	}
}