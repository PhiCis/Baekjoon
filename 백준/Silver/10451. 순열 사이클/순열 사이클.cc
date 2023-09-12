#include<bits/stdc++.h>
using namespace std;

int n, k, a[1010], c[1010];
int ans;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		ans=0;
		scanf("%d", &k);
		for(int i=1;i<=k;i++)
		{
			scanf("%d", &a[i]);
			c[i]=0;
		}
		for(int i=1;i<=k;i++)
		{
			if(c[i]) continue;
			ans++;
			int tmp=i;
			while(!c[tmp])
			{
				c[tmp]=1;
				tmp=a[tmp];
			}
		}
		printf("%d\n", ans);
	}
}