#include<bits/stdc++.h>
using namespace std;
#define INF 2e9

vector<pair<int, int> > G[1010];
int D[1010];
int N, M, S, E;
priority_queue<pair<int, int> > pq; 

void dijk(int S)
{
	for(int i=1;i<=1010;i++) D[i]=INF;
	D[S]=0;
	pq.push({S, 0});
	while(!pq.empty())
	{
		int now=pq.top().first;
		int dist=-pq.top().second;
		pq.pop();
		if(D[now]<dist) continue;
		for(auto i : G[now])
		{
			int next=i.first;
			int nextdist=dist+i.second;
			if(nextdist<D[next])
			{
				D[next]=nextdist;
				pq.push({next, -nextdist});
			}
		}
	}
}

int main()
{
	scanf("%d%d", &N, &M);
	while(M--)
	{
		int s, e, d;
		scanf("%d%d%d", &s, &e, &d);
		G[s].push_back({e, d});
	}
	scanf("%d%d", &S, &E);
	dijk(S);
	printf("%d\n", D[E]);
}