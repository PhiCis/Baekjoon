#include<bits/stdc++.h>
using namespace std;
#define pb push_back

vector<int> G[10010];
int V, E;
int A, B;
int visited[10010];
int cnt;
bool ans[10010];
int ANS;

int DFS(int v, bool isroot)
{
	visited[v]=++cnt;
	int res=visited[v];
	
	int child=0;
	for(auto i:G[v])
	{
		if(!visited[i])
		{
			child++;
			int tmp=DFS(i, false);
			if(!isroot&&tmp>=visited[v]) ans[v]=true;
			res=min(res, tmp);
		}
		else
		{
			res=min(res, visited[i]);
		}
	}
	
	if(isroot) ans[v]=(child>=2);
	
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
	
	for(int i=1;i<=V;i++)
	{
		if(!visited[i])
		{
			DFS(i, true);
		}
	}
	
	for(int i=1;i<=V;i++)
	{
		if(ans[i]) ANS++;
	}
	
	printf("%d\n", ANS);
	
	for(int i=1;i<=V;i++)
	{
		if(ans[i]) printf("%d ", i);
	}
}