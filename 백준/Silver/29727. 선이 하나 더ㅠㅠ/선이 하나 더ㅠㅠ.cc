#include<bits/stdc++.h>
using namespace std;

long long n, a, b, c, d;
int main()
{
	cin>>n>>a>>b>>c>>d;
	long long ans=(n*(n+1)/2)*(n*(n+1)/2);
	if(a!=c && b!=d) cout<<ans;
	else
	{
		if(b==d)
		{
			swap(a, b);
			swap(c, d);
		}
		if(b>d)
		{
			swap(b, d);
		}
		if(d<0||b>=n){}
		else
		{
			if(b<0) b=-1;
			if(d>=n) d=n;
			ans+=(n+1)*((d-b)*((d-b)-1)/2);
		}
		
		cout<<ans;
	}
}