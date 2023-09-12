#include<bits/stdc++.h>
using namespace std;

long long t, n, a[5000], s[5000], dp[5000];

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			dp[i]=9e18;
		}
		sort(a+1, a+n+1);
		for(int i=1;i<=n;i++)
		{
			s[i]=s[i-1]+a[i];
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=0;j<i;j++)
			{
				dp[i-j]=min(dp[i-j], (a[i]*(i-j))-(s[i]-s[j]));
			}
		}
		long long ans=0;
		for(int i=1;i<=n;i++)
		{
			ans+=dp[i];
		}
		cout<<ans<<"\n";
	}
}