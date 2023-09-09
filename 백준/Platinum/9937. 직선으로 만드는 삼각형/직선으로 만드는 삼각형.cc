#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

int n;
int a, b, c;
map<pair<int, int> , int> m;
int v[300030], s[300030], ss[300030];
main()
{
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a>>b>>c;
		if(a==0) m[{0, 1}]++;
		else if(b==0) m[{1, 0}]++;
		else
		{
			if(a<0)
			{
				a*=-1;
				b*=-1;
			}
			int g=abs(__gcd(a, b));
			a/=g, b/=g;
			m[{a, b}]++;
		}
	}
	int cnt=0;
	for(auto iter=m.begin(); iter!=m.end(); iter++)
	{
		v[++cnt]=iter->second;
	}
	for(int i=1;i<=cnt;i++)
	{
		s[i]=(s[i-1]+v[i])%mod;
		ss[i]=(ss[i-1]+v[i]*v[i])%mod;
	}
	int ans=0;
	for(int i=1;i<=cnt-2;i++)
	{
		ans+=v[i]*((s[cnt]-s[i])*(s[cnt]-s[i])%mod-(ss[cnt]-ss[i])%mod+mod)%mod*500000004%mod;
		ans%=mod;
	}
	cout<<ans;
}
