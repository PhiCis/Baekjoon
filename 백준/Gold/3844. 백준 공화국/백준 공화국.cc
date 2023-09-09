#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long ll;

int p[10000010];
vector<int> v;

ll power(ll a, ll b)
{
	if(b==0) return 1;
	ll tmp=power(a, b/2);
	if(b&1) return tmp*tmp%mod*a%mod;
	else return tmp*tmp%mod;
}

int main()
{
	p[2]=1;
	for(int i=3;i<=10000000;i+=2)
	{
		p[i]=1;
	}
	for(int i=3;i<=3200;i+=2)
	{
		for(int j=i*i;j<=10000000;j+=2*i)
		{
			p[j]=0;
		}
	}
	for(int i=2;i<=10000000;i++)
	{
		if(p[i]) v.push_back(i);
	}
	while(1)
	{
		int n;
		cin>>n;
		ll ans=1;
		if(!n) return 0;
		for(int i:v)
		{
			int tmp=n;
			int cnt=0;
			while(tmp)
			{
				cnt+=tmp/i;
				tmp/=i;
			}
			ans=ans*power(i, cnt/2*2)%mod;
		}
		cout<<ans<<"\n";
	}
}