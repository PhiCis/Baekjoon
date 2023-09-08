#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;
ll a[100010];

ll f(ll s, ll e)
{
//	printf("%d %d\n", s, e);
	if(s==e) return a[s]*a[s];
	ll m=(s+e)>>1;
	
	ll ret = max(f(s, m), f(m+1, e));
	ll l=m, r=m, v=a[m], tmp=a[m];
	while(1)
	{
		if(l-1>=s&&r+1<=e)
		{
			if(a[l-1]>a[r+1])
			{
				l--;
				v=min(v, a[l]);
				tmp+=a[l];
				ret=max(ret, v*tmp);
			}
			else
			{
				r++;
				v=min(v, a[r]);
				tmp+=a[r];
				ret=max(ret, v*tmp);
			}
		}
		else if(l-1>=s)
		{
			l--;
			v=min(v, a[l]);
			tmp+=a[l];
			ret=max(ret, v*tmp);
		}
		else if(r+1<=e)
		{
			r++;
			v=min(v, a[r]);
			tmp+=a[r];
			ret=max(ret, v*tmp);
		}
		else break;
//		printf("%d %d %d\n", v, l, r);
	}
	return ret;
}

int main()
{
	scanf("%lld", &n);
	for(ll i=1;i<=n;i++)
	{
		scanf("%lld", &a[i]);
	}
	printf("%lld", f(1, n));
}