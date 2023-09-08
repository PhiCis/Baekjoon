#include<bits/stdc++.h>
using namespace std;

int n, a[505050];
long long ans;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a+1, a+n+1);
	for(int i=1;i<=n;i++)
	{
		ans+=abs(a[i]-i);
	}
	printf("%lld", ans);
}