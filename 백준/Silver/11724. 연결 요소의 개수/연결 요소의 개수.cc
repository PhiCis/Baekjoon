#include<bits/stdc++.h>
using namespace std;

int N, M;
vector<int> G[1010];
int visited[1010];
int ans; 

void DFS(int v)
{
	visited[v]++;
	for(auto next: G[v])
	{
		if(visited[next]) continue;
		DFS(next);
	}
}

int main()
{
	scanf("%d%d", &N, &M);
	for(int i=1;i<=M;i++)
	{
		int u, v;
		scanf("%d%d", &u, &v);
		G[u].push_back(v);
		G[v].push_back(u);
	}
	for(int i=1;i<=N;i++)
	{
		if(visited[i]) continue;
		ans++;
		DFS(i);
	}
	printf("%d", ans);
}