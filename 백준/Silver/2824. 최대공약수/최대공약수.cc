#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, a, m;
vector<ll> v;
map<ll, ll> m1, m2;
ll flag;

ll ans=1;
#define mod 1000000000
int main()
{
	scanf("%lld", &n);
	for(ll i=1;i<=n;i++)
	{
		scanf("%lld", &a);
		for(ll j=2;j*j<=a;j++)
		{
			while(a%j==0)
			{
				v.push_back(j);
				m1[j]++;
				a/=j;
			}
		}
		if(a!=1) v.push_back(a), m1[a]++;
	}
	scanf("%lld", &m);
	for(ll i=1;i<=m;i++)
	{
		scanf("%lld", &a);
		for(ll j=2;j*j<=a;j++)
		{
			while(a%j==0)
			{
				v.push_back(j);
				m2[j]++;
				a/=j;
			}
		}
		if(a!=1) v.push_back(a), m2[a]++;
	}
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	for(ll i:v)
	{
//		printf("%d", i);
		ll tmp=min(m1[i], m2[i]);
		for(ll j=1;j<=tmp;j++)
		{
			ans*=i;
			if(ans>=mod) flag++;
			ans%=mod;
		}
	}
	if(flag) printf("%09lld", ans);
	else printf("%lld", ans);
}