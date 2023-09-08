#include<bits/stdc++.h>
using namespace std;

long long n, a[100010], ans;
int main()
{
	scanf("%lld", &n);
	for(long long i=0;i<n;i++)
	{
		scanf("%lld", &a[i]);
	}
	sort(a, a+n);
	for(long long i=0;i<n;i++)
	{
		ans+=max(0ll, a[n-1-i]-i);
	}
	printf("%lld", ans);
}