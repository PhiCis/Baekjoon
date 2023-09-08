#include<bits/stdc++.h>
using namespace std;

int n, a[100000], s[100000], k;
int dp[3][100000];

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s[i]=s[i-1]+a[i];
	}
	cin>>k;
	for(int i=k;i<=n;i++)
	{
		dp[0][i]=max(dp[0][i-1], s[i]-s[i-k]);
		dp[1][i]=max(dp[1][i-1], dp[0][i-k]+s[i]-s[i-k]);
		dp[2][i]=max(dp[2][i-1], dp[1][i-k]+s[i]-s[i-k]);
	}
	cout<<dp[2][n];
}