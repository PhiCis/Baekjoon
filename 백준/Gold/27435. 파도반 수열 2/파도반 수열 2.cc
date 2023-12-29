#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 998244353
int n, a[6][6], ans[6][6], tmp[6][6], m;
main()
{
	int t;
	cin>>t;
	while(t--)
	{
		n=3;
		cin>>m;
		m++;
		for(int i=1;i<=3;i++)
		{
			for(int j=1;j<=3;j++)
			{
				ans[i][j]=(i==j?1:0);
			}
		}
		a[1][2]=a[1][3]=a[2][1]=a[3][2]=1;
		a[1][1]=a[2][2]=a[2][3]=a[3][1]=a[3][3]=0;
		while(m)
		{
			if(m&1)
			{
				for(int i=1;i<=n;i++)
				{
					for(int j=1;j<=n;j++)
					{
						tmp[i][j]=0;
						for(int k=1;k<=n;k++)
						{
							tmp[i][j]+=a[i][k]*ans[k][j];
							tmp[i][j]%=mod;
						}
					}
				}
				for(int i=1;i<=n;i++)
				{
					for(int j=1;j<=n;j++)
					{
						ans[i][j]=tmp[i][j];
					}
				}
			}
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				{
					tmp[i][j]=0;
					for(int k=1;k<=n;k++)
					{
						tmp[i][j]+=a[i][k]*a[k][j];
						tmp[i][j]%=mod;
					}
				}
			}
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=n;j++)
				{
					a[i][j]=tmp[i][j];
				}
			}
			m>>=1;
		}
		cout<<ans[1][1]<<"\n";
	}
}