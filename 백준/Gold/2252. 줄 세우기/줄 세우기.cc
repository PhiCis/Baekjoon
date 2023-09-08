#include<stdio.h>

#include<vector>
#include<queue>
using namespace std;
queue<int> pq;
vector< vector<int> > G = vector< vector<int> > (100010, vector<int>());
int n, m, a, b, i, T;
int V[100010];
int main()
{
	scanf("%d %d", &n, &m);
	for(i=0;i<m;i++)
	{
		scanf("%d %d", &a, &b);
		G[a].push_back(b);
		V[b]++;
	}
	for(i=1;i<=n;i++)
	{
		if(V[i]==0)
		{
			pq.push(i);
		}
	}
	while(!pq.empty())
	{
		T=pq.front();
		pq.pop();
		printf("%d ", T);
		for(i=0;i<G[T].size();i++)
		{
			V[G[T][i]]--;
			if(V[G[T][i]]==0) pq.push(G[T][i]);
		}
	}
}