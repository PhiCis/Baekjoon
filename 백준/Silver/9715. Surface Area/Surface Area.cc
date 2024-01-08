#include<bits/stdc++.h>
using namespace std;

int t, n, m, a[100][100];

int main()
{
	cin>>t;
	while(t--)
	{
		for(int i=0;i<100;i++) for(int j=0;j<100;j++) a[i][j]=0;
		cin>>n>>m;
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				scanf("%1d", &a[i][j]);
				if(a[i][j]) ans+=a[i][j]*4+2;
				ans-=min(a[i][j], a[i-1][j])*2;
				ans-=min(a[i][j], a[i][j-1])*2;
			}
		}
		cout<<ans<<"\n";
	}
}