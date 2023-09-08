#include<bits/stdc++.h>
using namespace std;
#define int long long

int t, n, m, a[1010], b[1010], sa[1010], sb[1010];
vector<int> A;
int ans;
main()
{
	scanf("%lld", &t);
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld", &a[i]);
		sa[i]=sa[i-1]+a[i];
		for(int j=0;j<i;j++)
		{
			A.push_back(sa[i]-sa[j]);
		}
	}
	sort(A.begin(), A.end());
	scanf("%lld", &m);
	for(int i=1;i<=m;i++)
	{
		scanf("%lld", &b[i]);
		sb[i]=sb[i-1]+b[i];
		for(int j=0;j<i;j++)
		{
			ans+=upper_bound(A.begin(), A.end(), t-sb[i]+sb[j])-lower_bound(A.begin(), A.end(), t-sb[i]+sb[j]);
		}
	}
	printf("%lld", ans);
	
}