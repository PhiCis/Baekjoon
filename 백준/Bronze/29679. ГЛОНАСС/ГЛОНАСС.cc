#include<bits/stdc++.h>
using namespace std;

double t, r, v;
int main()
{
	cin>>t>>r>>v;
	cout.precision(10);
	if(v*t<=2*r) cout<<0;
	else cout<<(v*t-2*r)/t;
}