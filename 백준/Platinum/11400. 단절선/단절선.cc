#include<bits/stdc++.h>
using namespace std;
#define pb push_back

vector<int> G[100010];
int V, E;
int A, B;
int visited[100010];
int cnt;
vector<pair<int, int> > edge;

int DFS(int u, int v)
{
	visited[u]=++cnt;
	int res=visited[u];
	
	for(auto i:G[u])
	{
		if(i==v) continue;
		if(!visited[i])
		{
			int tmp=DFS(i, u);
			if(tmp>visited[u])
			{
				edge.pb({min(u, i), max(u, i)});
			}
			res=min(res, tmp);
		}
		else
		{
			res=min(res, visited[i]);
		}
	}
	return res;
}

int main()
{
	scanf("%d%d", &V, &E);
	for(int i=1;i<=E;i++)
	{
		scanf("%d%d", &A, &B);
		G[A].pb(B);
		G[B].pb(A);
	}
	
	DFS(1, 0);
	
	sort(edge.begin(), edge.end());
	
	int sz=edge.size();
	printf("%d\n", sz);
	for(int i=0;i<sz;i++)
	{
		printf("%d %d\n", edge[i].first, edge[i].second);
	}
	return 0;
}