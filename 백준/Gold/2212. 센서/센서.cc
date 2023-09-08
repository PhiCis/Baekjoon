#include<bits/stdc++.h>
using namespace std;
long long n, k, a[10100], b[10100], ans;
int main()
{
	scanf("%lld", &n);
	scanf("%lld", &k);
	for(int i=0;i<n;i++)
	{
		scanf("%lld", &a[i]);
	}
	sort(a, a+n);
	for(int i=0;i<n-1;i++)
	{
		b[i]=a[i+1]-a[i];
	}
	sort(b, b+n-1);
	for(int i=0;i<n-k;i++)
	{
		ans+=b[i];
	}
	printf("%lld", ans);
	
}