#include<bits/stdc++.h>
using namespace std;

int n, l, d[1010], r[1010], g[1010];
int ans;

int main()
{
	scanf("%d%d", &n, &l);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d%d", &d[i], &r[i], &g[i]);
	}
	int tmp=0;
	for(int i=1;i<=n;i++)
	{
		ans+=d[i]-tmp;
		if(ans%(r[i]+g[i])>=r[i]);
		else ans=ans/(r[i]+g[i])*(r[i]+g[i])+r[i];
		tmp=d[i];
//		printf("%d ", ans);
	}
	printf("%d", ans+l-tmp);
}