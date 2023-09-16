#include<bits/stdc++.h>
using namespace std;

int t, n, a[110];

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		int ans=0;
		for(int i=1;i<=n;i++) cin>>a[i];
		ans+=a[1]/120;
		ans+=(1440-a[n])/120;
		for(int i=2;i<=n;i++)
		{
			ans+=(a[i]-a[i-1])/120;
		}
		if(ans>=2) cout<<"YES";
		else cout<<"NO";
		cout<<"\n";
	}
}