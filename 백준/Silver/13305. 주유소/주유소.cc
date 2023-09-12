#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, a[100010], b[100010];
ll tmp=1e10;
ll ans;

int main()
{
	scanf("%lld", &n);
	for(int i=0;i<n-1;i++)
	{
		scanf("%lld", &a[i]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%lld", &b[i]);
		tmp=min(tmp, b[i]);
		ans+=tmp*a[i];
	}
	printf("%d", ans);
}