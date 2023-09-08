#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, k, cnt, t=1;
ll ans;

int main()
{
	scanf("%lld%lld", &n, &k);
	ll tmp=n;
	while(tmp)
	{
		tmp/=10;
		cnt++;
	}
	for(ll i=1;i<=cnt;i++)
	{
		t*=10;
	}
	t%=k;
	n%=k;
//	printf("%d %d\n", t, n);
	for(ll i=1;i<=1000000;i++)
	{
		ans*=t;
		ans+=n;
		ans%=k;
		if(ans==0)
		{
			printf("%d", i);
			return 0;
		}
	}
	printf("-1");
	return 0;
}