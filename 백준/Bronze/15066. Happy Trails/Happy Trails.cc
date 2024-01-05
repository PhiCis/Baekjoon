#include<bits/stdc++.h>
using namespace std;

int t;
double ans;

int main()
{
	cin>>t;
	while(t--)
	{
		double a, b;
		cin>>a>>b;
		ans+=b*sin(a*3.14159265358979/180);
	}
	printf("%.2lf", ans);
}