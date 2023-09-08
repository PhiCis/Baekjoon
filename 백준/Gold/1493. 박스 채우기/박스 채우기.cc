#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll x, y, z;

ll n;
ll a[21];
ll b[21];

ll ans;

int main()
{
	cin>>x>>y>>z;
	ll x1=0, x2=x, y1=0, y2=y, z1=0, z2=z;
	for(ll i=20;i>=0;i--)
	{
		ll tmp=1ll<<i;
		b[i]=(x1/tmp)*(y1/tmp)*(z2/tmp)+(x1/tmp)*(y2/tmp)*(z1/tmp)+(x1/tmp)*(y2/tmp)*(z2/tmp)+(x2/tmp)*(y1/tmp)*(z1/tmp)+(x2/tmp)*(y1/tmp)*(z2/tmp)+(x2/tmp)*(y2/tmp)*(z1/tmp)+(x2/tmp)*(y2/tmp)*(z2/tmp);
		x2=x%tmp, y2=y%tmp, z2=z%tmp;
		x1=x-x2, y1=y-y2, z1=z-z2;
	}
	cin>>n;
	for(ll i=1;i<=n;i++)
	{
		ll c, d;
		cin>>c>>d;
		a[c]=d;
	}
	for(ll i=20;i>0;i--)
	{
		if(a[i]<b[i])
		{
			ll tmp = b[i]-a[i];
			b[i]-=tmp;
			b[i-1]+=tmp*8;
		}
	}
	if(a[0]<b[0])
	{
		printf("-1");
		return 0;
	}
	else
	{
		for(ll i=20;i>=0;i--)
		{
			ans+=b[i];
		}
		printf("%lld", ans);
		return 0;
	}
}