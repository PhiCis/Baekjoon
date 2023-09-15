#include<bits/stdc++.h>
using namespace std;

int n, k, t, a[100000], b[100000];

int main()
{
	cin>>n>>k>>t;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		ans+=a[i];
		if(ans+k>=b[i])
		{
			ans=max(ans, b[i])+t;
		}
		else
		{
			ans+=k;
		}
	}
	cout<<ans;
}