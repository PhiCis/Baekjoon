#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, pnt, ans[100];

ll power(ll a, ll b, ll m)
{
	__int128_t ans=1, c=a%m;
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
		x=(__int128_t)x*x%n;
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
	for(ll a:{2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37})
	{
		if(n==a) return true;
		if(chk(n, a, d, r)) return false;
	}
	return true;
}

void factorization(ll n)
{
	if(n==1) return;
	
	if(millerrabin(n))
	{
		ans[pnt++]=n;
		return;
	}
	
	ll x, y, c, g=n;
	
	do
	{
		if(n==4)
		{
			g=2;
			break;
		}
		
		if(g==n)
		{
			x=y=rand()%(n-2);
            c=rand()%10+1;
            g=1;
		}
		x=((__int128_t)x*x%n+c)%n;
		y=((__int128_t)y*y%n+c)%n;
		y=((__int128_t)y*y%n+c)%n;
		g=__gcd(abs(x-y), n);
	} while(g==1);
	
	factorization(g);
	factorization(n/g);
	return;
}

int main()
{
	srand(time(NULL));
	scanf("%lld", &n);
	factorization(n);
	sort(ans, ans+pnt);
	for(int i=0;i<pnt;i++)
	{
		printf("%lld\n", ans[i]);
	}
}