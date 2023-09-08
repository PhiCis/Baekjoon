#include<bits/stdc++.h>
using namespace std;

int n, m, a[100], b[100], l, g;

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(i==1) l=a[i];
		else l=l/__gcd(l, a[i])*a[i];
	}
	for(int i=1;i<=m;i++)
	{
		cin>>b[i];
		g=__gcd(g, b[i]);
	}
	if(g%l) cout<<0;
	else
	{
		g/=l;
		int ans=0;
		for(int i=1;i*i<=g;i++)
		{
			if(g%i==0) ans+=2;
			if(i*i==g) ans--;
		}
		cout<<ans;
	}
}