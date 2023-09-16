#include<bits/stdc++.h>
using namespace std;

int a, b, c;
int ans=999;

int main()
{
	cin>>a>>b>>c;
	if(a!=0) ans=min({ans, 100*a+10*b+c, 100*a+10*c+b});
	if(b!=0) ans=min({ans, 100*b+10*a+c, 100*b+10*c+a});
	if(c!=0) ans=min({ans, 100*c+10*b+a, 100*c+10*a+b});
	cout<<ans;
}