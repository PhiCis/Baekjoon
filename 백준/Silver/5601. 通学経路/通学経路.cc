#include<bits/stdc++.h>
using namespace std;
#define int long long
int n, m, k, a, b;
int c[20][20], ans[20][20];
main()
{
	cin>>n>>m>>k;
	for(int i=1;i<=k;i++)
	{
		cin>>a>>b;
		c[a][b]=1;
	}
	ans[1][1]=1;
	if(c[1][1]) ans[1][1]=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(i==1&&j==1) continue;
			if(!c[i][j]) ans[i][j]=ans[i-1][j]+ans[i][j-1];
		}
	}
	cout<<ans[n][m];
}