#include<bits/stdc++.h>
using namespace std;

int n, a[10010];
vector<int> G[10010];
int par[10010];
int cache[10010][2];

int f(int k, int checked)
{
	if(cache[k][checked]) return cache[k][checked];
	
	int ret=0;
	if(checked)
	{
		ret+=a[k];
		for(auto child:G[k])
		{
			if(child==par[k]) continue;
			par[child]=k;
			ret+=f(child, 0);
		}
		return cache[k][checked]=ret;
	}
	else
	{
		for(auto child:G[k])
		{
			if(child==par[k]) continue;
			par[child]=k;
			ret+=max(f(child, 0), f(child, 1));
		}
		return cache[k][checked]=ret;
	}
}

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=1;i<n;i++)
	{
		int u, v;
		scanf("%d%d", &u, &v);
		G[u].push_back(v);
		G[v].push_back(u);
	}
	printf("%d", max(f(1, 1), f(1, 0)));
}