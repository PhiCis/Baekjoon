#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a[300030];
ll k;
ll ans=5e10;

void init()
{
	for(ll i=2;i<=300030;i++)
	{
		for(ll j=2;j*j<=i;j++)
		{
			if(i%(j*j)==0)
			{
				goto skip;
			}
			if(i%j==0)
			{
				a[i]=a[i/j]*(-1);
				goto skip;
			}
		}
		a[i]=1;
		skip:;
	}
}

int main()
{
	init();
	scanf("%lld", &k);
	ll s=k, e=4*k;
	while(s<=e)
	{
		ll m=((long long)s+e)/2;
		ll cnt=m;
		for(ll i=2;i*i<=m;i++)
		{
			cnt-=m/(i*i)*a[i];
		}
		if(m-cnt>=k)
		{
			if(m-cnt==k)
			{
				ans=min(ans, m);
			}
			e=m-1;
		}
		else
		{
			s=m+1;
		}
	}
	printf("%lld", ans);
}