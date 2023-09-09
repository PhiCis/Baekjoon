#include<bits/stdc++.h>
using namespace std;

int t, n, m, a[1000], b[1000], c[1000];

int main()
{
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		cout<<"Data Set "<<x<<":\n";
		cin>>n>>m;
		for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
		int mx=2e9, Mx=-2e9, my=2e9, My=-2e9;
		for(int i=1;i<=m;i++)
		{
			cin>>c[i];
			mx=min(mx, a[c[i]]);
			Mx=max(Mx, a[c[i]]);
			my=min(my, b[c[i]]);
			My=max(My, b[c[i]]);
		}
		int ans=0;
		for(int i=1;i<=n;i++)
		{
			if(a[i]>=mx&&a[i]<=Mx&&b[i]>=my&&b[i]<=My) ans++;
		}
		cout<<ans<<"\n\n";
	}
}