#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;
ll x;
ll a[15];

int main()
{
	a[0]=1;
	for(ll i=1;i<=11;i++) a[i]=a[i-1]*10;
	cin.tie(0);
	cin>>n;
	while(n--)
	{
		cin>>x;
		ll sz=to_string(x).size();
		ll tmp=0;
		for(ll i=0;i<sz;i++)
		{
			for(ll j=0;j<10;j++)
			{
				j*=a[i];
				if((ll)((__int128)(tmp+j)*(tmp+j)*(tmp+j)%a[i+1])==x%a[i+1])
				{
					tmp+=j;
					break;
				}
				j/=a[i];
			}
		}
		cout<<tmp<<"\n";
	}
}