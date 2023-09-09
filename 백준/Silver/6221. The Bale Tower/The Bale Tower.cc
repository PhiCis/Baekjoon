#include<bits/stdc++.h>
using namespace std;

int n;
pair<int, int> a[30];
int dp[30];
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
		int m=0;
		for(int j=0;j<i;j++)
		{
			if(a[j].second<a[i].second) m=max(m, dp[j]);
		}
		dp[i]=m+1;
		ans=max(ans, dp[i]);
	}
	printf("%d", ans);
}