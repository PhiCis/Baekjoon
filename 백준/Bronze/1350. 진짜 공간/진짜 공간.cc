#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n, k, ans = 0;
	scanf("%lld", &n);
	vector<long long> a(n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld", &a[i]);
	}
	scanf("%lld", &k);
	for(int i=0;i<n;i++)
	{
		if(a[i]==0) continue;
		ans+=k*((a[i]-1)/k+1);
	}
	printf("%lld", ans);
}