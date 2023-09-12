#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
ll n, k;
ll kinv;
ll tmp, ans, pnt;
ll power(ll a, ll b)
{
	ll res=1;
	while(b)
	{
		if(b&1)
		{
			res=res*a%MOD;
		}
		a=a*a%MOD;
		b>>=1;
	}
	return res;
}

int main()
{
	scanf("%lld%lld", &n, &k);
	kinv=power(k, MOD-2);
	ans=power(k, n);
	pnt=1;
	if(n>=2)
	{
		tmp=(n-1)*power(k, n-1)%MOD;
		ans=(ans+tmp)%MOD;
		pnt++;
	}
	while(n>=2*pnt)
	{
		tmp=tmp*kinv%MOD;
		tmp=tmp*power(pnt, MOD-2)%MOD;
		tmp=tmp*(n-(pnt-2))%MOD;
		tmp=tmp*(n-(pnt*2-1))%MOD;
		tmp=tmp*power(n-(pnt*2-3), MOD-2)%MOD;
		ans=(ans+tmp)%MOD;
		pnt++;
	}
	printf("%lld", ans);
	
}