#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, d, t[100010], v[100010], dp[100010], ans;

void DNC(ll s, ll e, ll l, ll r)
{
	if(s>e) return;
	
 	ll m=s+e>>1, MAX=0, MAXI=0;
  	for(ll i=max(m-d, l);i<=min(m, r);i++)
 	{
  		if(t[m]*(m-i)+v[i]>MAX)
		{
		  	MAX=t[m]*(m-i)+v[i];
		  	MAXI=i;
		}
 	}
  	if(MAX>ans) ans=MAX;
  	
  	DNC(s, m-1, l, MAXI);
  	DNC(m+1, e, MAXI, r);
}
int main()
{
 	scanf("%lld%lld", &n, &d);
  	for(ll i=1;i<=n;i++)
	{
	  	scanf("%lld", &t[i]);
	} 
 	for(ll i=1;i<=n;i++)
	{
	 	scanf("%lld", &v[i]);
	} 
  	DNC(1,n,1,n);
  	printf("%lld", ans);
}