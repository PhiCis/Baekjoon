#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, c, a[35];
ll v1[500050], v2[500050];
ll sz1, sz2;
ll ANS;
int main()
{
	scanf("%lld%lld", &n, &c);
	for(ll i=0;i<n;i++)
	{
		scanf("%lld", &a[i]);
	}
	sz1=(1<<(n/2));
	sz2=(1<<(n-n/2));
	for(ll i=0;i<(1<<(n/2));i++)
	{
		for(ll j=0;j<n/2;j++)
		{
			if(i&(1<<j)) v1[i]+=a[j];
		}
	}
	for(ll i=0;i<(1<<(n-n/2));i++)
	{
		for(ll j=0;j<n-n/2;j++)
		{
			if(i&(1<<j)) v2[i]+=a[j+n/2];
		}
	}
	sort(v2, v2+sz2);
	for(ll i=0;i<(1<<(n/2));i++)
	{
		ll s=0, e=sz2-1, ans=0;
		while(s<=e)
		{
			ll m=s+e>>1;
			if(v1[i]+v2[m]<=c)
			{
				ans=max(ans, m+1);
				s=m+1;
			}
			else
			{
				e=m-1;
			}
		}
		ANS+=ans;
	}
	printf("%lld", ANS);
}