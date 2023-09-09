#include<bits/stdc++.h>
using namespace std;
#define int long long

int t, n, m, a[10010], b[10010], c[10010], e[10010], d[10010], g[10010];


main()
{
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		cout<<"Data Set "<<x<<":\n";
		cin>>n>>m;
		for(int i=1;i<=m;i++) cin>>a[i]>>b[i]>>d[i]>>c[i];
		for(int i=1;i<=10000;i++) e[i]=g[i]=0;
		for(int i=1;i<=n;i++)
		{
			int f;
			cin>>f;
			e[f]++;
		}
		for(int i=1;i<=m;i++)
		{
			g[i]=-a[i]+min(e[i], d[i])*(c[i]-b[i]);
			if(g[i]>0) cout<<i<<"\n";
		}
		cout<<"\n";
	}
}