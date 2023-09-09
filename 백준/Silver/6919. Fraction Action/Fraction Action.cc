#include<bits/stdc++.h>
using namespace std;

int a, b;

int main()
{
	cin>>a>>b;
	int g=__gcd(a, b);
	a/=g, b/=g;
	if(a==0)
	{
		cout<<0;
		return 0;
	}
	if(a/b) cout<<a/b<<" ";
	if(b!=1) cout<<a%b<<"/"<<b; 
}