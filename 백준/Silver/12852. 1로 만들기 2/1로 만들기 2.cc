#include<bits/stdc++.h>
using namespace std;
int n, dp[1000100];
queue<int> Q;
vector<int> ans;
int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		dp[i]=-1;
	}
	dp[n]=0;
	Q.push(n);
	int now;
	while(!Q.empty())
	{
		now=Q.front();
		Q.pop();
		if(now==1) break;
		
		if(now%3==0)
		{
			if(dp[now/3]==-1)
			{
				dp[now/3]=now;
				Q.push(now/3);
			}
		}
		if(now%2==0)
		{
			if(dp[now/2]==-1)
			{
				dp[now/2]=now;
				Q.push(now/2);
			}
		}
		if(dp[now-1]==-1)
		{
			dp[now-1]=now;
			Q.push(now-1);
		}
	}
	while(1)
	{
		ans.push_back(now);
		now=dp[now];
		if(now==0) break;
	}
	int sz=ans.size();
	printf("%d\n", sz-1);
	for(int i=sz-1;i>=0;i--)
	{
		printf("%d ", ans[i]);
	}
}