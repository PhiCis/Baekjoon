#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ans;
ll n, l, r, a[20];

int main()
{
	cin>>n>>l>>r;
	l--;
	for(ll i=0;i<n;i++) cin>>a[i];
	for(ll i=1;i<(1<<n);i++)
	{
		ll g=0, cnt=0;
		for(ll j=0;j<n;j++)
		{
			if((i>>j)&1)
			{
				cnt++;
				if(g==0) g=a[j];
				else g=g/__gcd(g, a[j])*a[j];
			}
		}
		if(cnt&1) ans+=r/g-l/g;
		else ans+=l/g-r/g;
	}
	cout<<ans;
}