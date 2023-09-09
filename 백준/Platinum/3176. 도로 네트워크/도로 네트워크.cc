#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int N, Q;
int D[101010], P[20][101010], MIN[20][101010], MAX[20][101010];
vector<pair<int, int> > adj[101010];

void dfs(int u, int p)
{
	//P[0][u]=p;
	for(auto v : adj[u])
	{
		if(v.first==p) continue;
		D[v.first]=D[u]+1;
		dfs(v.first, u);
		P[0][v.first]=u;
		MIN[0][v.first]=v.second;
		MAX[0][v.first]=v.second;
	}
}

pair<int, int> LCA(int u, int v)
{
	int pmin=1e9;
	int pmax=-1e9;
	if(D[u]>D[v]) swap(u, v);
	for(int i=18;i>=0;i--)
	{
		if(D[v]-D[u]>=(1<<i))
		{
			pmin=min(pmin, MIN[i][v]);
			pmax=max(pmax, MAX[i][v]);
			v=P[i][v];
		}
	}
	if(u==v) return {pmin, pmax};
	for(int i=18;i>=0;i--)
	{
		if(P[i][u]!=P[i][v])
		{
			pmin=min(pmin, min(MIN[i][u], MIN[i][v]));
			pmax=max(pmax, max(MAX[i][u], MAX[i][v]));
			u=P[i][u], v=P[i][v];
		}
	}
	pmin=min(pmin, min(MIN[0][u], MIN[0][v]));
	pmax=max(pmax, max(MAX[0][u], MAX[0][v]));
	return {pmin, pmax};
}

int main()
{
	int u, v, c;
	scanf("%d", &N);
	for(int i=1;i<N;i++)
	{
		scanf("%d%d%d", &u, &v, &c);
		adj[u].pb({v, c}), adj[v].pb({u, c});
	}
	dfs(1, 0);
	for(int i=1;i<=18;i++)
	{
		for(int j=1;j<=N;j++)
		{
			P[i][j]=P[i-1][P[i-1][j]];
			MIN[i][j]=min(MIN[i-1][j], MIN[i-1][P[i-1][j]]);
			MAX[i][j]=max(MAX[i-1][j], MAX[i-1][P[i-1][j]]);
		}
	}
	scanf("%d", &Q);
	while(Q--)
	{
		scanf("%d%d", &u, &v);
		pair<int, int> p = LCA(u, v);
		printf("%d %d\n", p.first, p.second);
	}
	return 0;
}