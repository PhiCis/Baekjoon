#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll n, a, b, c, d, e, f;
	cin>>n>>a>>b>>c>>d>>e>>f;
	if(n==1)
	{
		cout<<a+b+c+d+e+f-max({a, b, c, d, e, f});
		return 0;
	}
	ll ans1=min(a, f)+min(e, b)+min(c, d);
	ll ans2=min(min(a, f)+min({b, c, d, e}), min(c, d)+min(b, e));
	ll ans3=min({a, b, c, d, e, f});
	cout<<ans1*4+ans2*4*(n-2)+ans2*4*(n-1)+ans3*4*(n-1)*(n-2)+ans3*(n-2)*(n-2);
}