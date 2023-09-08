#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 900528
int ans;
int c[200];
main()
{
	string s, t;
	cin>>s>>t;
	int n=s.size();
	int tmp=1;
	for(int i=1;i<t.size();i++)
	{
		(tmp*=n)%=mod;
		ans+=tmp;
	}
	for(int i=0;i<n;i++)
	{
		c[s[i]]=i;
	}
	tmp=1;
	for(int i=t.size()-1;i>=0;i--)
	{
		ans+=tmp*c[t[i]];
		ans%=mod;
		tmp*=n;
		tmp%=mod;
	}
	cout<<(ans+1)%mod;
}