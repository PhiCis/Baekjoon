#include<bits/stdc++.h>
using namespace std;

int n, a[1010], b[1010], dp[1010][2];

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d", &a[i], &b[i]);
		if(i==1) dp[i][0]=a[i], dp[i][1]=b[i];
		else dp[i][0]=max(dp[i-1][0]+abs(b[i]-b[i-1])+a[i], dp[i-1][1]+abs(b[i]-a[i-1])+a[i]), dp[i][1]=max(dp[i-1][0]+abs(a[i]-b[i-1])+b[i], dp[i-1][1]+abs(a[i]-a[i-1])+b[i]);
	}
	printf("%d", max(dp[n][0], dp[n][1]));
}