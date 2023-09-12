#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll a, b, c;

ll mlt(ll a, ll b)
{
	ll sum = 0;
	while(a)
	{
		if(a&1)
		{
			sum = (sum+b)%c;
		}
		a>>=1; a%=c;
		b<<=1; b%=c;
	}
	return sum%c;
}


ll power(ll a, ll b)
{
	if(b==1) return a;
	ll tmp = 1;
	while(b)
	{
		if(b&1) tmp = mlt(tmp, a)%c;
		a = mlt(a, a)%c;
		b>>=1;
	}
	return tmp%c;
}


int main()
{
	scanf("%lld%lld%lld", &a, &b, &c);
	printf("%lld", (power(a%c, b)%c));
}