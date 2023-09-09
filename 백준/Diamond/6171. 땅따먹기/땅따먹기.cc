#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct LAND{
	ll w, h;
};
LAND land[50050];

ll N;

bool cmp(LAND s, LAND t)
{
	if(s.w!=t.w) return s.w>t.w;
	return s.h>t.h;
}

vector<pair<ll, ll> > v;
ll sz;

long long dp[50050];

pair<ll, ll> s[50050];
ll pnt;

bool chk(pair<ll, ll> a, pair<ll, ll> b, pair<ll, ll> c)
{
	return (c.second-a.second)*(a.first-b.first)<(b.second-a.second)*(a.first-c.first);
}

int main()
{
	scanf("%lld", &N);
	for(ll i=1;i<=N;i++)
	{
		scanf("%lld%lld", &land[i].w, &land[i].h);
	}
	sort(land+1, land+1+N, cmp);
	for(ll i=1;i<=N;i++)
	{
		if(v.empty()) v.push_back({land[i].w, land[i].h});
		else
		{
			if(v.back().second<land[i].h) v.push_back({land[i].w, land[i].h});
		}
	}
	sz=v.size();
	
	dp[0]=0;
	for(ll i=0;i<sz;i++)
	{
		while(pnt>=2&&chk(s[pnt-1], s[pnt], {v[i].first, dp[i]}))
		{
			pnt--;
		}
		s[++pnt]={v[i].first, dp[i]};
		
		ll st=2, en=pnt, res=1;
		while(st<=en)
		{
			ll mi=st+en>>1;
			if((s[mi].second-s[mi-1].second)<=v[i].second*(s[mi-1].first-s[mi].first))
			{
				res=max(res, mi);
				st=mi+1;
			}
			else
			{
				en=mi-1;
			}
		}
		
		dp[i+1]=s[res].first*v[i].second+s[res].second;
	}
	printf("%lld", dp[sz]);
	
}