#include<bits/stdc++.h>
using namespace std;

int n;
double r, x[110], y[110], z[110];
double ans;
int main()
{
	cin>>n>>r;
	for(int i=1;i<=n;i++) cin>>x[i]>>y[i]>>z[i];
	x[n+1]=x[1], y[n+1]=y[1], z[n+1]=z[1];
	for(int i=1;i<=n;i++)
	{
		ans+=4.0*3.141592653589793*r*r*r/3;
		double d=sqrt((x[i]-x[i+1])*(x[i]-x[i+1])+(y[i]-y[i+1])*(y[i]-y[i+1])+(z[i]-z[i+1])*(z[i]-z[i+1]));
		ans-=2.0*3.141592653589793/3*(r-d/2)*(r-d/2)*(2*r+d/2);
	}
	cout.precision(10);
	cout<<ans;
}