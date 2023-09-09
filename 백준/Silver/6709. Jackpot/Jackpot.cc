#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[30];
int n, t;
main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		int ans=a[1];
		for(int i=2;i<=n;i++)
		{
			ans=ans/__gcd(ans, a[i])*a[i];
			if(ans>1000000000)
			{
				cout<<"More than a billion.\n";
				goto skip;
			}
		}
		cout<<ans<<"\n";
		skip:;
	}
}