#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, k, s, e, ans;
int main()
{
	scanf("%lld%lld", &n, &k);
	s=1ll; e=n*n; ans=n*n;
	while(s<=e)
	{
		ll m=s+e>>1;
		ll tmp=0;
		for(int i=1;i<=n;i++)
		{
			tmp+=min(n, m/i);
		}
		if(tmp>=k)
		{
			ans=min(ans, m);
			e=m-1;
		}
		else
		{
			s=m+1;
		}
	}
	printf("%lld", ans);
}