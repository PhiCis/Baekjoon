#include<bits/stdc++.h>
using namespace std;
int n, a[1010], s[1010], ans;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=1;i<n;i++)
	{
		s[i]=abs(a[i+1]-a[i]);
	}
	ans=s[1];
	for(int i=2;i<n;i++)
	{
		ans=__gcd(ans, s[i]);
	}
	printf("%d", ans);
}