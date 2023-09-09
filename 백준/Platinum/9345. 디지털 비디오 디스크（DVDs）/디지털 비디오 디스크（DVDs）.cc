#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 2e9

ll n, t, k, q, a, b;
ll T[400040][2];

void upd(ll id, ll s, ll e, ll t, ll v)
{
	if(s>t||e<t) return;
	if(s==e)
	{
		T[id][0]=T[id][1]=v;
		return;
	}
	ll m=s+e>>1;
	upd(id*2, s, m, t, v);
	upd(id*2+1, m+1, e, t, v);
	T[id][0]=min(T[id*2][0], T[id*2+1][0]);
	T[id][1]=max(T[id*2][1], T[id*2+1][1]);
	return;
}

ll query(ll id, ll s, ll e, ll t)
{
	if(s>t||e<t) return 0;
	if(s==e) return T[id][0];
	ll m=s+e>>1;
	return query(id*2, s, m, t)+query(id*2+1, m+1, e, t);
}

ll query1(ll id, ll s, ll e, ll l, ll r)
{
	if(e<l||r<s) return INF;
	if(l<=s&&e<=r) return T[id][0];
	ll m=s+e>>1;
	return min(query1(id*2, s, m, l, r), query1(id*2+1, m+1, e, l, r));
}

ll query2(ll id, ll s, ll e, ll l, ll r)
{
	if(e<l||r<s) return 0;
	if(l<=s&&e<=r) return T[id][1];
	ll m=s+e>>1;
	return max(query2(id*2, s, m, l, r), query2(id*2+1, m+1, e, l, r));
}

int main()
{
	scanf("%lld", &t);
	while(t--)
	{
		scanf("%lld%lld", &n, &k);
		for(int i=1;i<=n;i++)
		{
			upd(1, 1, n, i, i);
		}
		/*
		for(int i=1;i<=3*n;i++)
		{
			printf("%d ", T[i][0]);
		}
		printf("\n");
		for(int i=1;i<=3*n;i++)
		{
			printf("%d ", T[i][1]);
		}
		printf("\n");
		*/
		for(ll i=1;i<=k;i++)
		{
			scanf("%lld%lld%lld", &q, &a, &b);
			a++, b++;
			if(q==0)
			{
				ll tmpa=query(1, 1, n, a);
				ll tmpb=query(1, 1, n, b);
				upd(1, 1, n, a, tmpb);
				upd(1, 1, n, b, tmpa);
			}
			else
			{
				//printf("%lld %lld\n", query2(1, 1, n, a, b), query1(1, 1, n, a, b));
				if(query2(1, 1, n, a, b)==b&&query1(1, 1, n, a, b)==a) printf("YES\n");
				else printf("NO\n");
			}
		}
	}
}