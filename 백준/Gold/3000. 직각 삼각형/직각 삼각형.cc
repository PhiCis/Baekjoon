#include<bits/stdc++.h>
using namespace std;
#define int long long
int n, a[100010], b[100010], x[100010], y[100010], ans;
main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		x[a[i]]++;
		y[b[i]]++;
	}
	for(int i=1;i<=n;i++)
	{
		ans+=(x[a[i]]-1)*(y[b[i]]-1);
	}
	cout<<ans;
}