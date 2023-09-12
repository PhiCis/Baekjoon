#include<bits/stdc++.h>
using namespace std;
#define int long long

int n, a[100010], ans;
main()
{
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld", &a[i]);
	}
	sort(a+1, a+n+1);
	int i=n;
	for(;i-2>=1;i-=3)
	{
		ans+=a[i]+a[i-1];
	}
	for(int j=1;j<=i;j++)
	{
		ans+=a[j];
	}
	printf("%lld", ans);
}