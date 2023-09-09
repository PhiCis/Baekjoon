#include<bits/stdc++.h>
using namespace std;
#define int long long

int t, n;
int a[1000], b[1000], c[1000];


main()
{
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		cout<<"Data Set "<<x<<":\n";
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i]>>b[i]>>c[i];
		double ans=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				ans=max(ans, sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])+(c[i]-c[j])*(c[i]-c[j])));
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=i+1;j<=n;j++)
			{
				if(ans==sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])+(c[i]-c[j])*(c[i]-c[j]))) cout<<i<<" "<<j<<"\n";
			}
		}
	}
}