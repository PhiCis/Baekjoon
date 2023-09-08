#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 1e18

ll n, m;
vector<pair<ll, ll> > G[100010];
priority_queue<pair<ll, ll> > pq;
ll d[100010][3];
ll ans=1e18;
ll cnt;
ll a, b;

int main()
{
	scanf("%lld%lld", &n, &m);
	for(ll i=1;i<=m;i++)
	{
		ll u, v, c;
		scanf("%lld%lld%lld", &u, &v, &c);
		G[u].push_back({v, c});
		G[v].push_back({u, c});
	}
	scanf("%lld%lld", &a, &b);
	for(ll i=1;i<=n;i++)
	{
		for(int j=0;j<3;j++)
		{
			d[i][j]=INF;
		}
	}
	d[1][0]=0;
	pq.push({0, 1});
	while(!pq.empty())
	{
		ll nowdist = -pq.top().first;
		ll nownode = pq.top().second;
		pq.pop();
		if(d[nownode][0] < nowdist) continue;
		//d[nownode] = nowdist;
		for(auto next : G[nownode])
		{
			ll nextdist = d[nownode][0] + next.second;
			if(nextdist < d[next.first][0])
			{
				d[next.first][0] = nextdist;
				pq.push({-nextdist, next.first});
			}
		}
	}
	d[a][1]=0;
	pq.push({0, a});
	while(!pq.empty())
	{
		ll nowdist = -pq.top().first;
		ll nownode = pq.top().second;
		pq.pop();
		if(d[nownode][1] < nowdist) continue;
		//d[nownode] = nowdist;
		for(auto next : G[nownode])
		{
			ll nextdist = d[nownode][1] + next.second;
			if(nextdist < d[next.first][1])
			{
				d[next.first][1] = nextdist;
				pq.push({-nextdist, next.first});
			}
		}
	}
	d[b][2]=0;
	pq.push({0, b});
	while(!pq.empty())
	{
		ll nowdist = -pq.top().first;
		ll nownode = pq.top().second;
		pq.pop();
		if(d[nownode][2] < nowdist) continue;
		//d[nownode] = nowdist;
		for(auto next : G[nownode])
		{
			ll nextdist = d[nownode][2] + next.second;
			if(nextdist < d[next.first][2])
			{
				d[next.first][2] = nextdist;
				pq.push({-nextdist, next.first});
			}
		}
	}
	ans = min(ans, d[a][0]+d[b][1]+d[n][2]);
	ans = min(ans, d[b][0]+d[a][2]+d[n][1]);
	printf("%lld", ans==INF?-1:ans);
}