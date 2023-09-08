#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> g1[100], g2[100];
int ans;

int chk1[100], chk2[100];

int dfs1(int k)
{
	int res = 1;
	chk1[k]=1;
	for(auto j:g1[k])
	{
		if(chk1[j]) continue;
		res+=dfs1(j);
	}
	return res;
}

int dfs2(int k)
{
	int res = 1;
	chk2[k]=1;
	for(auto j:g2[k])
	{
		if(chk2[j]) continue;
		res+=dfs2(j);
	}
	return res;
}

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=m;i++)
	{
		int u, v;
		scanf("%d%d", &u, &v);
		g1[u].push_back(v);
		g2[v].push_back(u);
	}
	for(int i=1;i<=n;i++)
	{
		for(int i=1;i<=n;i++)
		{
			chk1[i]=chk2[i]=0;
		}
		if(dfs1(i)>(n+1)/2||dfs2(i)>(n+1)/2) ans++;
	}
	printf("%d", ans);
}