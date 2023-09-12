#include<bits/stdc++.h>
using namespace std;

int n, a, b;
vector<int> T[100010];
queue<int> Q;
int ans[100010];
int visited[100010];

int main()
{
	scanf("%d", &n);
	for(int i=1;i<n;i++)
	{
		scanf("%d%d", &a, &b);
		T[a].push_back(b);
		T[b].push_back(a);
	}
	Q.push(1);
	visited[1]=1;
	while(!Q.empty())
	{
		int now=Q.front();
		Q.pop();
		for(auto next:T[now])
		{
			if(visited[next]==0)
			{
				visited[next]=1;
				ans[next]=now;
				Q.push(next);
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		printf("%d\n", ans[i]);
	}
}