#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> G1[10010], G2[10010];
stack<int> s;
int chk1[10010], chk2[10010];
vector<int> ans[10010];
int pnt;

bool cmp(vector<int> a, vector<int> b)
{
	return a[0]<b[0];
}

void DFS(int k)
{
	chk1[k]=1;
	
	for(auto next:G1[k])
	{
		if(chk1[next]==1) continue;
		DFS(next);
	}
	s.push(k);
}

void DFS2(int k)
{
	chk2[k]=1;
	ans[pnt].push_back(k);
	for(auto next:G2[k])
	{
		if(chk2[next]==1) continue;
		DFS2(next);
	}
}

int main()
{
	scanf("%d%d" ,&n, &m);
	for(int i=1;i<=m;i++)
	{
		int u, v;
		scanf("%d%d", &u, &v);
		G1[u].push_back(v);
		G2[v].push_back(u);
	}
	for(int i=1;i<=n;i++)
	{
		if(chk1[i]==0) DFS(i);
	}
	while(!s.empty())
	{
		int now = s.top();
		s.pop();
		if(chk2[now]==0)
		{
			DFS2(now);
			sort(ans[pnt].begin(), ans[pnt].end());
			pnt++;
		}	
	}
	printf("%d\n", pnt);
	sort(ans, ans+pnt, cmp);
	for(int i=0;i<pnt;i++)
	{
		for(auto j:ans[i])
		{
			printf("%d ", j);
		}
		printf("-1\n");
	}
}