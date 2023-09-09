#include<bits/stdc++.h>
using namespace std;

int n, k, t, a[110], ans;

int main()
{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>t;
		a[i]=1;
		for(int j=1;j<=k;j++)
		{
			a[i]*=t;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]>0) ans+=a[i];
	}
	cout<<ans;
}