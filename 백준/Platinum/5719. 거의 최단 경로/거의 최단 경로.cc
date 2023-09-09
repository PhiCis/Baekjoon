#include<bits/stdc++.h>
using namespace std;
int n, m, x, y, z, s, e;
int a[510][510], dp[510];

void dijk()
{
	memset(dp, -1, sizeof(dp));
	priority_queue<pair<int, int> > pq;
	pq.push({0, s});
	while(!pq.empty())
	{
		int here = pq.top().second;
		int cost = -pq.top().first;
		
		pq.pop();
		if(dp[here]!=-1) continue;
		dp[here] = cost;
		for(int i=0;i<n;i++)
		{
			if(a[here][i]==-1) continue;
			else if(dp[i]!=-1) continue;
			pq.push({-cost-a[here][i], i});
		}
	}
}

void BFS()
{
	queue<int> q;
	q.push(e);
	while(!q.empty())
	{
		int c = q.front();
		q.pop();
		for(int i=0;i<n;i++)
		{
			if(dp[c]==dp[i]+a[i][c]&&a[i][c]!=-1)
			{
				a[i][c]=-1;
				q.push(i);
			}
		}
	}
}

int main()
{
	while(1)
	{
		scanf("%d%d", &n, &m);
		if(n==0&&m==0) break; 
		scanf("%d%d", &s, &e);
		memset(a, -1, sizeof(a));
		for(int i=0;i<m;i++)
		{
			scanf("%d%d%d", &x, &y, &z);
			a[x][y]=z;
		}
		dijk();
		BFS();
		dijk();
		printf("%d\n", dp[e]);
	}
	
}