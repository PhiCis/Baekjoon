#include<bits/stdc++.h>
using namespace std;
#define int long long
int n, m, k, a[30], c[30], f[30];
main()
{
	f[0]=f[1]=1;
	for(int i=2;i<=20;i++)
	{
		f[i]=f[i-1]*i;
	}
	cin>>n>>m;
	if(m==1)
	{
		cin>>k;
		k-=1;
		for(int i=1;i<=n;i++)
		{
			c[i]=1;
		}
		for(int i=n;i>=1;i--)
		{
			for(int j=1;j<=n;j++)
			{
				if(c[j])
				{
					if(k<f[i-1])
					{
						c[j]=0;
						cout<<j<<" ";
						break;
					}
					else
					{
						k-=f[i-1];
					}
				}
			}
		}
	}
	else
	{
		int ans=0;
		for(int i=n;i>=1;i--)
		{
			cin>>a[i];
		}
		for(int i=1;i<=n;i++)
		{
			c[i]=1;
		}
		for(int i=n;i>=1;i--)
		{
			int cnt=0;
			for(int j=1;j<a[i];j++)
			{
				if(c[j]) cnt++;
			}
			ans+=cnt*f[i-1];
			c[a[i]]=0;
		}
		cout<<ans+1;
	}
}