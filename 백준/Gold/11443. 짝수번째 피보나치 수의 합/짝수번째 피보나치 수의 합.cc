#include<bits/stdc++.h>
#define MOD 1000000007
using namespace std;
typedef long long ll;

ll A, B;

ll calc_F(ll n)
{
	ll a[2][2]={1, 1, 1, 0};
	ll f[2][2]={1, 0, 0, 1};
	while(n)
	{
		if(n&1)
		{
			ll tmp[2][2];
			tmp[0][0]=((a[0][0]*f[0][0])%MOD+(a[0][1]*f[1][0])%MOD)%MOD;
			tmp[0][1]=((a[0][0]*f[0][1])%MOD+(a[0][1]*f[1][1])%MOD)%MOD;
			tmp[1][0]=((a[1][0]*f[0][0])%MOD+(a[1][1]*f[1][0])%MOD)%MOD;
			tmp[1][1]=((a[1][0]*f[0][1])%MOD+(a[1][1]*f[1][1])%MOD)%MOD;
			f[0][0]=tmp[0][0];
			f[0][1]=tmp[0][1];
			f[1][0]=tmp[1][0];
			f[1][1]=tmp[1][1];
		}
		ll tmp[2][2];
		tmp[0][0]=((a[0][0]*a[0][0])%MOD+(a[0][1]*a[1][0])%MOD)%MOD;
		tmp[0][1]=((a[0][0]*a[0][1])%MOD+(a[0][1]*a[1][1])%MOD)%MOD;
		tmp[1][0]=((a[1][0]*a[0][0])%MOD+(a[1][1]*a[1][0])%MOD)%MOD;
		tmp[1][1]=((a[1][0]*a[0][1])%MOD+(a[1][1]*a[1][1])%MOD)%MOD;
		a[0][0]=tmp[0][0];
		a[0][1]=tmp[0][1];
		a[1][0]=tmp[1][0];
		a[1][1]=tmp[1][1];
		n>>=1;
	}
	return f[1][0];
}

int main()
{
	scanf("%lld", &A);
	printf("%lld", (calc_F((A/2)*2+1)+MOD-1)%MOD);
}