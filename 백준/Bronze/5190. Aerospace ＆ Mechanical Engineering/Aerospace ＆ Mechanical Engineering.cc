#include<bits/stdc++.h>
using namespace std;
#define int long long

int t, n;
double m, a[100], b[100], c[100];


main()
{
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		cout<<"Data Set "<<x<<":\n";
		cin>>n>>m;
		for(int i=1;i<=n;i++) cin>>a[i]>>b[i]>>c[i];
		for(int i=1;i<=n;i++) m+=a[i];
		double ans=0, v=0;
		for(int i=1;i<=n;i++)
		{
			ans+=v*b[i]+0.5*(c[i]/m-9.81)*b[i]*b[i];
			v+=(c[i]/m-9.81)*b[i];
			m-=a[i];
		}
		printf("%.2lf\n" ,ans);
	}
}