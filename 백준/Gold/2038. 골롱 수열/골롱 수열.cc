#include<bits/stdc++.h>
using namespace std;

long long n;
pair<long long, long long> dp[1000100];

int main()
{
	dp[1]={1, 1};
	dp[2]={2, 3};
	int pnt = 2;
	for(int i=3;i<=1000000;i++)
	{
		if(!(dp[pnt].first<=i && i<=dp[pnt].second)) pnt++;
		dp[i]={dp[i-1].second+1, dp[i-1].second+pnt};
	}
	cin>>n;
	for(int i=1;i<=1000000;i++)
	{
		if(dp[i].first<=n&&n<=dp[i].second)
		{
			cout<<i;
			return 0;
		}
	}
}