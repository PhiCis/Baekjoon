#include<bits/stdc++.h>
using namespace std;

long long x, y, z, w;
long long ans=9e18;
int n;

int main()
{
	cin>>x>>y>>z>>w;
	cin>>n;
	while(n--)
	{
		long long a, b, c, d, e;
		cin>>a>>b>>c>>d>>e;
		ans=min({ans, e * max((x-1)/a+1, (z-1)/c+1) * max((y-1)/b+1, (w-1)/d+1), e * max((x-1)/b+1, (z-1)/d+1) * max((y-1)/a+1, (w-1)/c+1)});
	}
	cout<<ans;
	
}