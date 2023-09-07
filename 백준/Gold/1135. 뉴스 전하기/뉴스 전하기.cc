#include<bits/stdc++.h>
using namespace std;

int n;
int p[100], c[100], dp[100];
vector<int> ch[100];

bool cmp(const int a, const int b)
{
	return dp[a]<dp[b];
}

int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		dp[i]=-1;
		scanf("%d", &p[i]);
		if(p[i]>=0) c[p[i]]++;
	}
	while(dp[0]==-1)
	{
		for(int i=0;i<n;i++)
		{
			if(c[i]==0&&dp[i]==-1)
			{
				dp[i]=0;
				int sz=ch[i].size();
				sort(ch[i].begin(), ch[i].end(), cmp);
				for(int j=0;j<sz;j++)
				{
					dp[i]=max(dp[i], dp[ch[i][j]]+sz-j);
				}
				c[p[i]]--;
				ch[p[i]].push_back(i);
			}
		}
	}
	/*
	for(int i=0;i<n;i++)
	{
		printf("%d ", dp[i]);
	}
	*/
	printf("%d", dp[0]);
}