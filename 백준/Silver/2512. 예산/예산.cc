#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, a[10010], m, s, e, mid, ret, sum, M;
int main()
{
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld", &a[i]);
		sum+=a[i];
		M=max(M, a[i]);
	}
	scanf("%lld", &m);
	if(sum<=m)
	{
		printf("%lld", M);
		return 0;
	}
	s=0; e=2e9;
	while(s<=e)
	{
		mid=s+e>>1;
		//printf("%d %d %d\n", s, e, mid);
		ll ans=0;
		for(int i=1;i<=n;i++)
		{
			ans+=min(a[i], mid);
		}
		if(ans>m)
		{
			e=mid-1;
		}
		else
		{
			ret=max(ret, mid);
			s=mid+1;
		}
	}
	printf("%lld", ret);
}