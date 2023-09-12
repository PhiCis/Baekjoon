#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a, b, l;
ll ans=1;
vector<ll> v;

int main()
{
	scanf("%lld%lld%lld", &a, &b, &l);
	a=a*b/__gcd(a, b);
//	printf("%d\n", a);
	ll tmp=a;
	for(ll i=2;i*i<=tmp;i++)
	{
		while(tmp%i==0)
		{
			tmp/=i;
			v.push_back(i);
		}
	}
	if(tmp>1) v.push_back(tmp);
	tmp=l;
	for(ll i=2;i*i<=tmp;i++)
	{
		while(tmp%i==0)
		{
			tmp/=i;
			v.push_back(i);
		}
	}
	if(tmp>1) v.push_back(tmp);
	sort(v.begin(), v.end());
	v.erase(unique(v.begin(), v.end()), v.end());
	for(auto i:v)
	{
		ll tmp=a;
		ll cnt1=0, cnt2=0;
		while(tmp%i==0)
		{
			cnt1++;
			tmp/=i;
		}
		tmp=l;
		while(tmp%i==0)
		{
			cnt2++;
			tmp/=i;
		}
		if(cnt1>cnt2)
		{
			printf("-1");
			return 0;
		}
		else if(cnt1<cnt2)
		{
			for(ll j=1;j<=cnt2;j++)
			{
				ans*=i;
			}
		}
		
	}
	printf("%lld", ans);
}