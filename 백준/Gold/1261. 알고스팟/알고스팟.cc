#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[10010];
vector<pair<int, int> > g[10010];
int d[10010];
priority_queue<pair<int, int> > pq; 

int main()
{
	scanf("%d%d", &m, &n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%1d", &a[i*m+j]);
			d[i*m+j]=1e9;
		}
	}
	for(int i=0;i<n*m;i++)
	{
		if(i%m!=0)
		{
			g[i].push_back({i-1, a[i-1]});
		}
		if(i%m!=m-1)
		{
			g[i].push_back({i+1, a[i+1]});
		}
		if(i/m!=0)
		{
			g[i].push_back({i-m, a[i-m]});
		}
		if(i/m!=n-1)
		{
			g[i].push_back({i+m, a[i+m]});
		}
	}
	
	d[0] = 0;
	pq.push({0, 0});
	while(!pq.empty())
	{
		int current = pq.top().first;
		int distance = -pq.top().second;
		pq.pop();
		if(d[current] < distance) continue;
		for(auto j:g[current])
		{
			int next = j.first; 
			int nextDistance = distance + j.second;
			if(nextDistance < d[next]) {
				d[next] = nextDistance;
				pq.push({next, -nextDistance});
			}
		}
	}
	printf("%d", d[n*m-1]);
}