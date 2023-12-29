#include<bits/stdc++.h>
using namespace std;

long long t, n, ans, a[100010], b[100010];

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		ans=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			ans+=2*a[i];
		}
		for(int i=1;i<=n;i++)
		{
			cin>>b[i];
			if(i==1) ans+=b[i];
			else ans+=abs(b[i]-b[i-1]);
			if(i==n) ans+=b[i];
		}
		cout<<ans<<"\n";
	}
}