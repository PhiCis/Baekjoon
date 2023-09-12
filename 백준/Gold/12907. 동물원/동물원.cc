#include<bits/stdc++.h>
using namespace std;
#define int long long
int n, a[50];
main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int c;
		cin>>c;
		a[c]++;
	}
	int tmp=2;
	for(int i=0;i<=40;i++)
	{
		if(a[i]>tmp)
		{
			cout<<0;
			return 0;
		}
		tmp=min(tmp, a[i]);
	}
	int ans=1;
	if(a[0]) ans*=2;
	for(int i=1;i<=40;i++)
	{
		if(a[i]==2) ans*=2;
		if(a[i]==1&&a[i-1]==2) ans*=2;
	}
	cout<<ans;
}