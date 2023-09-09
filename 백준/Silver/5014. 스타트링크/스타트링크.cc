#include<bits/stdc++.h>
using namespace std;

int f, s, g, u, d;
int dp[1000010];

int main()
{
	scanf("%d%d%d%d%d", &f, &s, &g, &u, &d);
	queue<int> q;
	q.push(s);
	dp[s]=1;
	while(!q.empty())
	{
		int now = q.front();
		q.pop();
		if(now-d>=1 && dp[now-d]==0)
		{
			dp[now-d]=dp[now]+1;
			q.push(now-d);
		}
		if(now+u<=f && dp[now+u]==0)
		{
			dp[now+u]=dp[now]+1;
			q.push(now+u);
		}
	}
	if(dp[g]==0) printf("use the stairs");
	else printf("%d", dp[g]-1);
}