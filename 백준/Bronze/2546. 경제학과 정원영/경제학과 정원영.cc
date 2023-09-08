#include<bits/stdc++.h>
using namespace std;

long long t, n, m, a[200020], b[200020];

int main()
{
	cin>>t;
	while(t--)
	{
		long long A=0, B=0, ans=0;
		cin>>n>>m;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			A+=a[i];
		}
		for(int i=1;i<=m;i++)
		{
			cin>>b[i];
			B+=b[i];
		}
		for(int i=1;i<=n;i++)
		{
			if(a[i]*n<A&&a[i]*m>B) ans++;
		}
		cout<<ans<<"\n";
	}
}