#include<bits/stdc++.h>
using namespace std;
int t, n, a[110];
int main()
{
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		int ans=0;
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=2;i<n;i++) if(a[i]>a[i-1]&&a[i]>a[i+1]) ans++;
		cout<<"Case #"<<x<<": "<<ans<<"\n";
	}
}