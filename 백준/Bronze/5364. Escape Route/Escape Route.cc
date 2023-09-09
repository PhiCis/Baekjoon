#include<bits/stdc++.h>
using namespace std;
#define int long long

int n, a[100100], b[100100], ans=9e18;

main()
{
//	cin.tie(NULL);
//	ios::sync_with_stdio(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
	cout<<a[1]<<" "<<b[1]<<"\n";
	for(int i=2;i<=n;i++)
	{
		ans=min(ans, (a[i]-a[1])*(a[i]-a[1])+(b[i]-b[1])*(b[i]-b[1]));
	}
	for(int i=2;i<=n;i++)
	{
		if(ans==(a[i]-a[1])*(a[i]-a[1])+(b[i]-b[1])*(b[i]-b[1]))
		{
			cout<<a[i]<<" "<<b[i]<<"\n";
			printf("%.2lf", sqrt(ans));
			return 0;
		}
	}
}