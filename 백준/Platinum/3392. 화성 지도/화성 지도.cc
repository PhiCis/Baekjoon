#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, sx, ex, sy, ey;

ll T[320032][2];

struct Line{
	ll x, y1, y2, c;
};

vector<ll> vy;
vector<Line> v;

ll sz, k;

ll ans;

bool cmp(Line s, Line t)
{
	return s.x<t.x;
}

ll gety(ll y)
{
	return lower_bound(vy.begin(), vy.end(), y)-vy.begin();
}

void upd(ll id, ll s, ll e, Line v)
{
	if(vy[s-1]>=v.y2||v.y1>=vy[e]) return;
	
	if(v.y1<=vy[s-1]&&vy[e]<=v.y2)
	{
		if(v.c==1) T[id][1]++;
		else T[id][1]--;
	}
	else
	{
		ll m=s+e>>1;
		upd(id*2, s, m, v);
		upd(id*2+1, m+1, e, v);
	}
	
	if(T[id][1]==0) T[id][0]=T[id*2][0]+T[id*2+1][0];
	else T[id][0]=vy[e]-vy[s-1];
	
	return;
}

int main()
{
	scanf("%lld", &n);
	for(ll i=1;i<=n;i++)
	{
		scanf("%lld%lld%lld%lld", &sx, &sy, &ex, &ey);
		v.push_back({sx, sy, ey, 1});
		v.push_back({ex, sy, ey, -1});
		vy.push_back(sy); vy.push_back(ey);
	}
	sort(vy.begin(), vy.end());
	vy.erase(unique(vy.begin(), vy.end()), vy.end());
	k=vy.size()-1;
	
	sort(v.begin(), v.end(), cmp);
	sz=v.size();
	
	for(ll i=0;i<sz;i++)
	{
		if(i) ans+=T[1][0]*(v[i].x-v[i-1].x);
		upd(1, 1, k, v[i]);
	}
	printf("%lld", ans);
}