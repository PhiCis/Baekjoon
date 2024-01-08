#include<bits/stdc++.h>
using namespace std;

int n, m;
double a[110];

int main()
{
	int t;
	cin>>t;
	for(int z=1;z<=t;z++)
	{
		
		cin>>n>>m;
		double ans=m+2;
		double p=1;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			p*=a[i];
//			cout<< (n-i)+(p*(m-i+1)+(1-p)*(m-i+1+m+1));
			ans=min(ans, (n-i)+(p*(m-i+1)+(1-p)*(m-i+1+m+1)));
		}
		cout.precision(10);
		cout<<"Case #"<<z<<": ";
		cout<<ans<<"\n";
	}
}