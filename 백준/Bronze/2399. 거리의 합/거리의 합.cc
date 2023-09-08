#include<bits/stdc++.h>
using namespace std;

long long s[10010], a[10010];

int main()
{
	long long n;
	long long ans = 0;
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld", &a[i]);
	}
	sort(a+1, a+n+1);
	for(int i=1;i<=n;i++)
	{
		s[i]=a[i]+s[i-1];
	}
	for(int i=1;i<=n;i++)
	{
		ans+=(s[n]-s[i])-(a[i]*(n-i))+a[i]*i-s[i];
//		printf("%d\n", ans);
	}
	printf("%lld", ans);
}