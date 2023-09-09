#include<bits/stdc++.h>
using namespace std;

int n;
int p[10010];
int dp[20020];
int m[20020];

int main()
{
	cin>>n;
	for(int i=1;i<n;i++)
	{
		cin>>p[i];
	}
	for(int i=1;i<=20000;i++)
	{
		m[i]=2e9;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=(i&1);j<=i;j+=2)
		{
			dp[j]=min(m[i+j], m[i-j])+p[i];
			m[i+j]=min(dp[j], m[i+j]);
			m[i-j]=min(dp[j], m[i-j]);
		}
	}
	cout<<dp[0];
}