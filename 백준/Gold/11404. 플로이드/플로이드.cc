#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;
	vector<vector<int> > g(n+1, vector<int>(n+1, 1e9));
	while(m--)
	{
		int u, v, c;
		cin>>u>>v>>c;
		g[u][v]=min(g[u][v], c);
	}
	for(int i=1;i<=n;i++)
	{
		g[i][i]=0;
	}
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				g[i][j]=min(g[i][j], g[i][k]+g[k][j]);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(g[i][j]==1e9) cout<<"0 ";
			else cout<<g[i][j]<<" ";
		}
		cout<<"\n";
	}
}