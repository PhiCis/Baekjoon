#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll t, a, b, n;

int main()
{
	cin>>t;
	for(int x=1;x<=t;x++)
	{
		cin>>a>>b>>n;
		a--;
		vector<ll> v;
		for(ll i=2;i*i<=n;i++)
		{
			if(n%i==0)
			{
				v.push_back(i);
				while(n%i==0) n/=i;
			}
		}
		if(n>1) v.push_back(n);
		int sz=v.size();
		ll tmp=b-a;
		for(int i=1;i<(1<<sz);i++)
		{
			ll cnt=0, ret=1;
			for(int j=0;j<sz;j++)
			{
				if((i>>j)&1)
				{
					cnt++;
					ret*=v[j];
				}
			}
			if(cnt&1) tmp+=a/ret-b/ret;
			else tmp+=b/ret-a/ret;
		}
		cout<<"Case #"<<x<<": "<<tmp<<"\n";
	}
}