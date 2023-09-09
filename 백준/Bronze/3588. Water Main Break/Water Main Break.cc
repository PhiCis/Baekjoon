#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t, n, s, f;
ll ss, ff, r;

main()
{
	scanf("%lld", &t);
	for(int i=1;i<=t;i++)
	{
		ll ans = 0;
		scanf("%lld%lld%lld", &n, &s, &f);
		for(int j=1;j<=n;j++)
		{
			scanf("%lld%lld%lld", &ss, &ff, &r);
			if(ff<s||ss>f) continue;
			ans+=(min(f, ff)-max(s, ss)+1)*r;
		}
		printf("Data Set %d:\n%lld\n\n", i, ans);
	}
}