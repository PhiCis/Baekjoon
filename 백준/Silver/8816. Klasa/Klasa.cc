#include<bits/stdc++.h>
using namespace std;

long long n, ans=1ll, mod=1000ll;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ans=1ll;
		cin>>n;
		for(long long i=1ll;i<=n-1;i+=2ll)
		{
			(ans*=i)%=mod;
		}
		cout<<ans<<"\n";
	}
}