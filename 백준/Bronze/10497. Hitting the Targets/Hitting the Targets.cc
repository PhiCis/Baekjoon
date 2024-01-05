#include<bits/stdc++.h>
using namespace std;

int n;
string s;
int a[100], b[100], c[100], d[100], e[100], f[100], g[100], A, B;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		if(s=="rectangle")
		{
			cin>>a[A]>>b[A]>>c[A]>>d[A];
			A++;
		}
		else
		{
			cin>>e[B]>>f[B]>>g[B];
			B++;
		}
	}
	cin>>n;
	while(n--)
	{
		int x, y;
		cin>>x>>y;
		int ans=0;
		for(int i=0;i<A;i++)
		{
			if(a[i]<=x&&x<=c[i]&&b[i]<=y&&y<=d[i]) ans++;
		}
		for(int i=0;i<B;i++)
		{
			if((e[i]-x)*(e[i]-x)+(f[i]-y)*(f[i]-y)<=g[i]*g[i]) ans++;
		}
		cout<<ans<<"\n";
	}
}