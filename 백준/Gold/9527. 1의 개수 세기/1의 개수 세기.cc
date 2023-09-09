#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a, b;

ll f(ll n)
{
	ll ans = 0;
	ll tmp = 1, ttmp = 0;
	while(n)
	{
		if(n&1)
		{
			ans+=tmp*(n/2);
			ans+=(1+ttmp);
			ttmp+=tmp;
			tmp*=2;
		}
		else
		{
			ans+=tmp*(n/2);
			tmp*=2;
			
		}
		n/=2;
	}
	return ans;
}

int main()
{
	scanf("%lld%lld", &a, &b);
	printf("%lld", f(b)-f(a-1));
}