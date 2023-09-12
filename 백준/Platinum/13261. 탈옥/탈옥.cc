#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll L, G, C[8080], S[8080];
ll DP[808][8080];

void f(ll t, ll s, ll e, ll l, ll r)
{
	if(s>e) return;
	ll m=s+e>>1;
	ll opt=l;
	
	for(ll i=l;i<=min(m, r);i++)
	{
		if(DP[t-1][opt]+(S[m]-S[opt])*(m-opt)>DP[t-1][i]+(S[m]-S[i])*(m-i)) opt=i;
	}
	
	DP[t][m]=DP[t-1][opt]+(S[m]-S[opt])*(m-opt);
	f(t, s, m-1, l, opt);
	f(t, m+1, e, opt, r);
}

int main()
{
	scanf("%lld%lld", &L, &G);
	for(ll i=1;i<=L;i++)
	{
		scanf("%lld", &C[i]);
		S[i]=S[i-1]+C[i];
	}
	
	for(ll i=0;i<=L;i++)
	{
		DP[1][i]=i*S[i];
	}
	
	for(ll i=2;i<=G;i++)
	{
		f(i, 0, L, 0, L);
	}
	
	printf("%lld", DP[G][L]);
}