#include<bits/stdc++.h>
using namespace std;

double a, b, c, d;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c>>d;
		double ans;
		if(b==d) ans=0.5*(c-a)/(13-a);
		else ans=0.5+((d-b-1)*12+(c-1))/12;
		printf("%.4lf\n", ans);
	}
}