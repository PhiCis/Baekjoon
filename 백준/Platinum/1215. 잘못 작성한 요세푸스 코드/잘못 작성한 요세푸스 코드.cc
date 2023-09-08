#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, k, ans;

int main()
{
	cin>>n>>k;
//	for(int i=1;i<=n;i++) ans+=k%i;
	ll j;
	for(int i=1;i*i<=k;i++)
	{
		ans+=k%i, j=i;
		if(i==n) goto skip;
	}
	for(int i=0;i*i<k;i++)
	{
		ll e=(i==0?n:k/i), s=max(j+1, k/(i+1)+1);
		if(e>=n&&s<=n) e=n;
		if(s>n) continue;
		ans+=k*(e-s+1)-i*(e-s+1)*(e+s)/2;
	}
	skip:;
	cout<<ans;
}