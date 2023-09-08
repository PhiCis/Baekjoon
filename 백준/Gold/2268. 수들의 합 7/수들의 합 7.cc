#include<bits/stdc++.h>
using namespace std;
#define INF 2e9
typedef long long ll;

ll n, m, a, b, c, T[4004000];

void update(ll id, ll s, ll e, ll target, ll data)
{
	if(target<s||target>e) return;
	if(s==e)
	{
		T[id]=data;
		return;
	}
	ll m=s+e>>1;
	update(id*2, s, m, target, data);
	update(id*2+1, m+1, e, target, data);
	T[id]=T[id*2]+T[id*2+1];
}

ll sum(ll id, ll s, ll e, ll l, ll r)
{
	if(r<s||e<l) return 0;
	if(s>=l&&r>=e)
	{
		return T[id];
	}
	ll m=s+e>>1;
	return sum(id*2, s, m, l, r)+sum(id*2+1, m+1, e, l, r);
	
}

int main()
{
	scanf("%lld%lld", &n, &m);
	for(int i=1;i<=m;i++)
	{
		scanf("%lld%lld%lld", &a, &b, &c);
		if(a==0)
		{
			if(b>c)
			{
				ll tmp=b; b=c; c=tmp;
			}
			printf("%lld\n", sum(1, 1, n, b, c));
		}
		if(a==1)
		{
			update(1, 1, n, b, c);
		}
	}
}