#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> G[550];
int ans;
int visited[550];
void DFS(int v, int cnt)
{
	if(cnt==1||cnt==2) 
	{
		//printf("%d %d\n", v, cnt);
		
		if(visited[v]==0) ans++;
		visited[v]=1;
	}
	if(cnt>2) return;
	for(auto next: G[v])
	{
		DFS(next, cnt+1);
	}
}

int main()
{
	scanf("%d", &n);
	scanf("%d", &m);
	for(int i=1;i<=m;i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		G[a].push_back(b);
		G[b].push_back(a);
	}
	visited[1]=1;
	DFS(1, 0);
	printf("%d", ans);
}