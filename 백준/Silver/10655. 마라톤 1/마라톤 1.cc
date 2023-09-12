#include<bits/stdc++.h>
using namespace std;

long long n, a[101010], b[101010], c[101010], s;

int main()
{
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld%lld", &a[i], &b[i]);
	}
	for(int i=2;i<=n;i++)
	{
		s+=abs(a[i]-a[i-1])+abs(b[i]-b[i-1]);
	}
	for(int i=2;i<n;i++)
	{
		c[i]=abs(a[i]-a[i-1])+abs(b[i]-b[i-1])+abs(a[i]-a[i+1])+abs(b[i]-b[i+1])-abs(a[i+1]-a[i-1])-abs(b[i+1]-b[i-1]);
//		printf("%d", c[i]);
	}
	sort(c+2, c+n);
	printf("%lld", s-c[n-1]);
}