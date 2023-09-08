#include<bits/stdc++.h>
using namespace std;

int n, s, e, m, a, b;
vector<int> g[101];
queue<int> q;
vector<int> chk(101, -1);

int main()
{
	cin>>n>>s>>e>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>a>>b;
		g[a].push_back(b);
		g[b].push_back(a);
	}
	q.push(s);
	chk[s]=0;
	while(!q.empty())
	{
		int now = q.front();
		q.pop();
		for(auto next:g[now])
		{
			if(chk[next]!=-1) continue;
			chk[next]=chk[now]+1;
			q.push(next);
		}
	}
	cout<<chk[e];
}