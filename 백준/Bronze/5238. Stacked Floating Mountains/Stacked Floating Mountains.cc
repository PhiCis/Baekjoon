#include<bits/stdc++.h>
using namespace std;
#define int long long

int n, a[1000];
int t;

main()
{
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=3;i<=n;i++)
		{
			if(a[i]!=a[i-1]+a[i-2])
			{
				cout<<"NO\n";
				goto skip;
			}
		}
		cout<<"YES\n";
		skip:;
	}
}