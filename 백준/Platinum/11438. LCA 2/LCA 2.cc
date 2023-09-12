#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int N, Q;
int D[101010], P[20][101010];
vector<int> adj[101010];

void dfs(int u, int p)
{
	P[0][u]=p;
	for(int v : adj[u])
	{
		if(v==p) continue;
		D[v]=D[u]+1;
		dfs(v, u);
	}
}

int LCA(int u, int v)
{
	if(D[u]>D[v]) swap(u, v);
	for(int i=18;i>=0;i--)
	{
		if(D[v]-D[u]>=(1<<i))
		{
			v=P[i][v];
		}
	}
	if(u==v) return u;
	for(int i=18;i>=0;i--)
	{
		if(P[i][u]!=P[i][v])
		{
			u=P[i][u], v=P[i][v];
		}
	}
	return P[0][u];
}

int main()
{
	int u, v;
	scanf("%d", &N);
	for(int i=1;i<N;i++)
	{
		scanf("%d%d", &u, &v);
		adj[u].pb(v), adj[v].pb(u);
	}
	dfs(1, 0);
	for(int i=1;i<=18;i++)
	{
		for(int j=1;j<=N;j++)
		{
			P[i][j]=P[i-1][P[i-1][j]];
		}
	}
	scanf("%d", &Q);
	while(Q--)
	{
		scanf("%d%d", &u, &v);
		printf("%d\n", LCA(u, v));
	}
	return 0;
}