#include<bits/stdc++.h>
using namespace std;

int n, m, a, b;
vector<int> g[2020];
int chk[2020];
void dfs(int now)
{
	for(auto next:g[now])
	{
		if(!chk[next])
		{
			chk[next]=chk[now]+1;
			if(chk[next]>=5)
			{
				cout<<1;
				exit(0);
			}
			dfs(next);
		}
	}
	chk[now]=0;
}

int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>a>>b;
		a++;
		b++;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++) chk[j]=0;
		chk[i]=1;
		dfs(i);
	}
	cout<<0;
	return 0;
}