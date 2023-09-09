#include<bits/stdc++.h>
using namespace std;
#define int long long

int t, n, m, a[10010], b[10010], c[10010], d[10010], e[10010];


main()
{
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		cout<<"Data Set "<<x<<":\n";
		cin>>n>>m;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=m;i++) cin>>b[i]>>c[i]>>d[i]>>e[i];
		int ans=0;
		for(int i=1;i<=m;i++)
		{
			ans+=a[e[i]]*b[i]*c[i]*d[i];
		}
		cout<<ans<<"\n";
	}
}