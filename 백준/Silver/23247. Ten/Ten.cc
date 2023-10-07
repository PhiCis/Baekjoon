#include<bits/stdc++.h>
using namespace std;

vector<pair<int, int> > v;

int ans, n, m, a[330][330], s[330][330];

int main()
{
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
			if(i*j<=10) v.push_back({i, j});
		}
	}
	
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
			s[i][j]=s[i-1][j]+s[i][j-1]+a[i][j]-s[i-1][j-1];
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			for(auto k:v)
			{
				if(i-k.first>=0 && j-k.second>=0 && s[i][j]-s[i-k.first][j]-s[i][j-k.second]+s[i-k.first][j-k.second]==10) ans++;
			}
		}
	}
	cout<<ans;
}