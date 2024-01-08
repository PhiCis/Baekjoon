#include<bits/stdc++.h>
using namespace std;

int t, n, m;
int a[100][100], s[100][100];

int main()
{
	cin>>t;
	for(int z=1;z<=t;z++)
	{
		cin>>m>>n;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				char c;
				cin>>c;
				if(c=='G'||c=='S') a[i][j]=0;
				else a[i][j]=1;
				s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+a[i][j];
			}
		}
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				for(int k=i;k<=n;k++)
				{
					for(int l=j;l<=m;l++)
					{
						if(s[k][l]-s[k][j-1]-s[i-1][l]+s[i-1][j-1]==0) ans=max(ans, (k-i+1)*(l-j+1));
					}
				}
			}
		}
		cout<<"Case #"<<z<<": "<<ans<<"\n";
	}
}