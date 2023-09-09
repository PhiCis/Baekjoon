#include<bits/stdc++.h>
using namespace std;

int t, a[1010], b[1010], n, m, ans;

int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin>>t;
	while(t--)
	{
		ans=2e9;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		cin>>m;
		for(int i=1;i<=m;i++) cin>>b[i];
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++) ans=min(ans, abs(a[i]-b[j]));
		}
		cout<<ans<<"\n";
	}
}