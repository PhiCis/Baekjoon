#include<bits/stdc++.h>
using namespace std;

int n, m;
int k, a[1010];
vector<int> out[1010];
int in[1010];
vector<int> ans;
queue<int> q;

int main()
{
	scanf("%d%d", &n, &m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d", &k);
		for(int j=1;j<=k;j++)
		{
			scanf("%d", &a[j]);
		}
		for(int j=2;j<=k;j++)
		{
			out[a[j-1]].push_back(a[j]);
			in[a[j]]++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(in[i]==0) q.push(i);
	}
	while(!q.empty())
	{
		int now = q.front();
		q.pop();
		ans.push_back(now);
		for(int next:out[now])
		{
			in[next]--;
			if(in[next]==0)
			{
				q.push(next);
			}
		}
	}
	if(ans.size()!=n) printf("0");
	else
	{
		for(int i=0;i<n;i++)
		{
			printf("%d\n", ans[i]);
		}
	}
	
}