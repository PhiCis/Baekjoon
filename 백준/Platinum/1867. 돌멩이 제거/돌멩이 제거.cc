#include<bits/stdc++.h>
using namespace std;

int n, k;
vector<int> adj[550];
int A[550], B[550];
bool visited[550];
int match;

bool DFS(int u)
{
	visited[u]=true;
	for(auto v:adj[u])
	{
		if(B[v]==0||visited[B[v]]==false&&DFS(B[v]))
		{
			A[u]=v, B[v]=u;
			return true;
		}
	}
	return false;
}

int main()
{
	scanf("%d%d", &n, &k);
	for(int i=1;i<=k;i++)
	{
		int u, v;
		scanf("%d%d", &u, &v);
		adj[u].push_back(v);
	}
	
	for(int i=1;i<=n;i++)
	{
		if(A[i]==0)
		{
			for(int i=1;i<=n;i++)
			{
				visited[i]=false;
			}
			if(DFS(i)) match++;
		}
	}
	
	printf("%d", match);
}