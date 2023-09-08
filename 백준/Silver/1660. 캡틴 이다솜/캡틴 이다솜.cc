#include<bits/stdc++.h>
using namespace std;

int a[125], dp[300030];
int n, ans=2e9;

int main()
{
	for(int i=1;i<125;i++)
	{
		a[i]=i*(i+1)*(i+2)/6;
	}
	for(int j=1;j<300030;j++)
	{
		dp[j]=2e9;
	}
	cin>>n;
	for(int i=1;i<125;i++)
	{
		for(int j=a[i];j<=n;j++)
		{
			dp[j]=min(dp[j], min(dp[j-a[i]], dp[j-a[i]])+1);
		}
	}
	cout<<dp[n];
}