#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef long long ll;

ll a, b, f=1;

ll calc(ll a, ll b)
{
	while(b)
	{
		if(b&1)
		{
			f=f*a%MOD;
		}
		a=a*a%MOD;
		b>>=1;
	}
	return f;
}

int main()
{
	scanf("%lld%lld", &a, &b);
	a%=MOD;
	b%=(MOD-1);
	printf("%lld", calc(a, b));
}