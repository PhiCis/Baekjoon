#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll N, K;
ll A[5050];
ll C[5050][5050];
ll DP[5050][5050];

void f(ll t, ll s, ll e, ll l, ll r)
{
	if(s>e) return;
	ll m=s+e>>1;
	ll opt=l;
	DP[t][m]=DP[t-1][opt-1]+C[opt][m];
	for(ll i=l+1;i<=min(m, r);i++)
	{
		ll tmp = DP[t-1][i-1]+C[i][m];
		if(DP[t][m]<tmp)
		{
			DP[t][m]=tmp;
			opt=i;
		}
	}
	f(t, s, m-1, l, opt);
	f(t, m+1, e, opt, r);
}

int main()
{
	scanf("%lld%lld", &N, &K);
	for(ll i=1;i<=N;i++)
	{
		scanf("%lld", &A[i]);
		for(ll j=1;j<=i;j++)
		{
			C[j][i]=C[j][i-1]|A[i];
		}
	}
	for(ll i=1;i<=N;i++)
	{
		DP[1][i]=C[1][i];
	}
	for(ll i=2;i<=K;i++)
	{
		f(i, i, N, i, N);
	}
	printf("%lld", DP[K][N]);
}