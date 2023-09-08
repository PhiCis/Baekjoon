#include<bits/stdc++.h>
using namespace std;
int n;
pair<int, int> a[110];
int dp[110];
int ans;
int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d", &a[i].first, &a[i].second);
	}
	sort(a, a+n);
	for(int i=0;i<n;i++)
	{
		dp[i]=1;
		for(int j=0;j<i;j++)
		{
			if(a[j].second<a[i].second)
			{
				dp[i]=max(dp[i], dp[j]+1);
			}
		}
		ans=max(ans, dp[i]);
	}
	printf("%d", n-ans);
}