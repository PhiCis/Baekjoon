#include<bits/stdc++.h>
using namespace std;

int cnt=0;
int l, u;
int p[1000010];
int dp[1000010];
long long dpp[1000010];

int main()
{
	for(int i=2;i<=1000000;i++)
	{
		p[i]=i;
		if(i%2==0) p[i]=2;
	}
	for(int i=3;i<=1000;i+=2)
	{
		for(int j=i*i;j<=1000000;j+=2*i)
		{
			if(p[j]==j) p[j]=i;
		}
	}
	dp[1]=-1;
	for(int i=2;i<=1000000;i++)
	{
		if(p[i]==i) dp[i]=1;
		else dp[i]=dp[i/p[i]]+1;
	}
	for(int i=2;i<=1000000;i++)
	{
		if(dp[i]==1) dp[i]=-2;
		else dp[i]--;
	}
	while(1)
	{
		cnt++;
		cin>>l>>u;
		if(l==-1) return 0;
		long long ans;
		dpp[l]=dp[l];
		ans=dp[l];
		for(int i=l+1;i<=u;i++)
		{
			dpp[i]=max(dpp[i-1], 0ll)+dp[i];
			ans=max(ans, dpp[i]);
		}
		cout<<cnt<<". "<<ans<<"\n";
		
	}
}