#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef __int128_t lll;

ll power(ll a, ll b, ll m)
{
	lll ans=1, c=a%m;
	while(b)
	{
		if(b&1)
		{
			ans=ans*c%m;
		}
		c=c*c%m;
		b>>=1;
	}
	return ans;
}

bool chk(ll n, ll a, ll d, ll r)
{
	auto x=power(a, d, n);
	if(x==1||x==n-1) return false;
	for(ll i=1;i<r;i++)
	{
		x=(lll)x*x%n;
		if(x==n-1) return false;
	}
	return true;
}

bool millerrabin(ll n)
{
	if(n<2) return false;
	ll r=0, d=n-1;
	while(!(d&1))
	{
		d>>=1;
		r++;
	}
	for(ll a:{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67})
	{
		if(n==a) return true;
		if(chk(n, a, d, r)) return false;
	}
	return true;
}

int main()
{
	long long a, b;
	scanf("%lld%lld", &a, &b);
	for(long long i=a;i<=b;i++)
	{
		if(millerrabin(i) || i==9) printf("%lld ", i);	
	}	
}