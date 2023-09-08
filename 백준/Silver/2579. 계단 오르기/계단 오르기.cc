#include<stdio.h>
#include<algorithm>
using namespace std;
int n, i, a[1000], dp[1000][3];
int main()
{
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(i==1) dp[i][1]=a[i];
		if(i>1) dp[i][1]=max(dp[i-2][1]+a[i], dp[i-2][2]+a[i]);
		dp[i][2]=dp[i-1][1]+a[i];
	}
	printf("%d", max(dp[n][1], dp[n][2]));
}