#include<bits/stdc++.h>
using namespace std;

int a, b, c, d, e;

int main()
{
	int ans=0;
	cin>>a>>b>>c>>d>>e;
	if(a-b<=1000) ans++;
	if(a-c<=1000) ans++;
	if(a-d<=1000) ans++;
	if(a-e<=1000) ans++;
	cout<<ans;
}