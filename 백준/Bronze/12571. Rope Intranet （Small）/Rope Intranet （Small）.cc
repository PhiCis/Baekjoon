#include<bits/stdc++.h>
using namespace std;

int t, n;
int a[1010], b[1010];
int main()
{
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
	{
		int ans=0;
		scanf("%d", &n);
		for(int i=1;i<=n;i++)
		{
			scanf("%d%d", &a[i], &b[i]);
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				if((a[i]>a[j])^(b[i]>b[j])) ans++;
			}
		}
		printf("Case #%d: %d\n", i, ans);
	}
}