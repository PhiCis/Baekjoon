#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> g1[110], g2[110];
int chk1[110], chk2[110];
int ans[110];

int dfs1(int i)
{
	int ret=1;
	for(auto j:g1[i])
	{
		if(chk1[j]) continue;
		chk1[j]=1;
		ret+=dfs1(j);
	}
	return ret;
}

int dfs2(int i)
{
	int ret=1;
	for(auto j:g2[i])
	{
		if(chk2[j]) continue;
		chk2[j]=1;
		ret+=dfs2(j);
	}
	return ret;
}

int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int a, b;
		cin>>a>>b;
		g1[a].push_back(b);
		g2[b].push_back(a);
	}
	for(int i=1;i<=n;i++)
	{
		for(int i=1;i<=n;i++)
		{
			chk1[i]=chk2[i]=0;
		}
		chk1[i]=chk2[i]=1;
		cout<<n+1-dfs1(i)-dfs2(i)<<"\n";
	}
}