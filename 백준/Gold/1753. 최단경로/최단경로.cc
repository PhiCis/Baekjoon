#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 9e18

ll n, m;
vector<pair<ll, ll> > G[100010];
priority_queue<pair<ll, ll> > pq;
ll d[100010];
ll ans, ansi;
ll cnt;

ll fir;

int main()
{
	scanf("%lld%lld", &n, &m);
	scanf("%lld", &fir);
	for(ll i=1;i<=m;i++)
	{
		ll u, v, c;
		scanf("%lld%lld%lld", &u, &v, &c);
		G[u].push_back({v, c});
		//G[v].push_back({u, c});
	}
	for(ll i=1;i<=n;i++)
	{
		d[i]=INF;
	}
	d[fir]=0;
	pq.push({0, fir});
	while(!pq.empty())
	{
		ll nowdist = -pq.top().first;
		ll nownode = pq.top().second;
		pq.pop();
		if(d[nownode] < nowdist) continue;
		//d[nownode] = nowdist;
		for(auto next : G[nownode])
		{
			ll nextdist = d[nownode] + next.second;
			if(nextdist < d[next.first])
			{
				d[next.first] = nextdist;
				pq.push({-nextdist, next.first});
			}
		}
	}
	for(ll i=1;i<=n;i++)
	{
		printf(d[i]==INF?"INF\n":"%d\n", d[i]);
	}
}