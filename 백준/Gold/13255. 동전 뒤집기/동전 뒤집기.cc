#include<bits/stdc++.h>
using namespace std;
int n, k;
double a[1010], dp[1010][2];

int main()
{
	cin>>n>>k;
	for(int i=1;i<=k;i++)
	{
		cin>>a[i];
		a[i]/=n;
	}
	dp[0][0]=1;
	for(int i=1;i<=k;i++)
	{
		dp[i][0]=(1-a[i])*dp[i-1][0]+a[i]*dp[i-1][1];
		dp[i][1]=(1-a[i])*dp[i-1][1]+a[i]*dp[i-1][0];
	}
	printf("%.10lf", dp[k][0]*n);
}