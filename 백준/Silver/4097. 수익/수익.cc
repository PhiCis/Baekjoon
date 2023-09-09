#include<bits/stdc++.h>
using namespace std;

long long n, a[250050], dp[250050];
long long ans;

int main()
{
	while(1)
	{
		cin>>n;
		if(n==0) return 0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			dp[i]=max(0ll, dp[i-1])+a[i];
		}
		ans=-9e18;
		for(int i=1;i<=n;i++)
		{
			ans=max(ans, dp[i]);
		}
		cout<<ans<<"\n";
	}
}