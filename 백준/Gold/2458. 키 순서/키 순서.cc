#include<bits/stdc++.h>
using namespace std;

int n, m, ANS;
vector<int> G1[550], G2[550];
int visited[550];
int ans[550];



int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=m;i++)
	{
		int a, b;
		scanf("%d%d", &a, &b);
		G1[a].push_back(b);
		G2[b].push_back(a);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			visited[j]=0;
		}
		queue<int> Q;
		visited[i]=1;
		Q.push(i);
		while(!Q.empty())
		{
			int now=Q.front();
			Q.pop();
			for(auto next:G1[now])
			{
				if(visited[next]) continue;
				visited[next]=1;
				Q.push(next);
			}
		}
		for(int j=1;j<=n;j++)
		{
			ans[j]+=visited[j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			visited[j]=0;
		}
		queue<int> Q;
		visited[i]=1;
		Q.push(i);
		while(!Q.empty())
		{
			int now=Q.front();
			Q.pop();
			for(auto next:G2[now])
			{
				if(visited[next]) continue;
				visited[next]=1;
				Q.push(next);
			}
		}
		for(int j=1;j<=n;j++)
		{
			ans[j]+=visited[j];
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(ans[i]==n+1) ANS++;
		//printf("%d\n", ans[i]);
	}
	printf("%d", ANS);
}