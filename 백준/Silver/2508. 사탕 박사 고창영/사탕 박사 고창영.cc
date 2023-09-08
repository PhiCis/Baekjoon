#include<bits/stdc++.h>
using namespace std;

int t, n, m;
char a[410][410];

int main()
{
	cin.tie(NULL);
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		int ans=0;
		memset(a, 0, sizeof(a));
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>a[i][j];
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				if(a[i][j]=='o')
				{
					if(a[i-1][j]=='v'&&a[i+1][j]=='^') ans++;
					if(a[i][j-1]=='>'&&a[i][j+1]=='<') ans++;
				}
			}
		}
		cout<<ans<<"\n";
	}
}