#include<bits/stdc++.h>
using namespace std;

int n, m;
vector<int> g[10010];
int cnt[10010];
int CNT[10010];
vector<int> ans;
int ANS;

void f(int i)
{
	cnt[i]=1;
	for(auto j:g[i])
	{
		if(cnt[j]) continue;
		f(j);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int u, v;
		cin>>u>>v;
		g[v].push_back(u);
	}
	for(int i=1;i<=n;i++)
	{
		for(int i=1;i<=n;i++)
		{
			cnt[i]=0;
		}
		f(i);
		int tmp=0;
		for(int i=1;i<=n;i++)
		{
			if(cnt[i]==1) tmp++;
		}
		CNT[i]=tmp;
	}
	for(int i=1;i<=n;i++)
	{
//		cout<<CNT[i]<<"\n";
		ANS = max(ANS, CNT[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if(ANS==CNT[i]) cout<<i<<" ";
	}
}