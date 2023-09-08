#include<bits/stdc++.h>
using namespace std;

int n;
int u, v, p, q;
vector<pair<int, pair<int, int> > > g[11];
pair<long long, long long> ans[11];

void dfs(int u)
{
	for(auto next:g[u])
	{
		int v=next.first;
		if(ans[v].first) continue;
		ans[v]={ans[u].first*next.second.first, ans[u].second*next.second.second};
		dfs(v);
	}
}

int main()
{
	cin>>n;
	for(int i=1;i<n;i++)
	{
		cin>>u>>v>>p>>q;
		g[u].push_back({v, {q, p}});
		g[v].push_back({u, {p, q}});
	}
	ans[0]={1, 1};
	dfs(0);
//	for(int i=0;i<n;i++)
//	{
//		cout<<ans[i].first<<" "<<ans[i].second<<"\n";
//	}
	long long l=1, g=0;
	for(int i=1;i<n;i++)
	{
		l=l/__gcd(l, ans[i].second)*ans[i].second;
	}
	for(int i=0;i<n;i++)
	{
		ans[i].first *= l/ans[i].second;
		g=__gcd(g, ans[i].first);
	}
	for(int i=0;i<n;i++)
	{
		cout<<ans[i].first/g<<" ";
	}
	
}