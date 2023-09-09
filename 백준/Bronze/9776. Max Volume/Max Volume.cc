#include<bits/stdc++.h>
using namespace std;

string s;
double r, a, b;
double ans;
int n;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s;
		if(s=="S")
		{
			cin>>r;
			ans=max(ans,4.0/3*3.14159*r*r*r);
		}
		else if(s=="C")
		{
			cin>>a>>b;
			ans=max(ans, 1.0/3*3.14159*a*a*b);
		}
		else
		{
			cin>>a>>b;
			ans=max(ans, 3.14159*a*a*b);
		}
	}
	printf("%.3lf", ans);
}