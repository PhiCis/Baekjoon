#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t, n, m, p, x, a, b, c;
int main()
{
	cin>>t;
	while(t--)
	{
		map<ll, int> M;
		cin>>n>>m>>p>>x>>a>>b>>c;
		for(int i=1;i<=n;i++)
		{
			x=(a*x%p*x%p+b*x%p+c)%p;
			if(M[x]==0) M[x]=i;
		}
		ll ans=0;
		for(int i=1;i<=m;i++)
		{
			x=(a*x%p*x%p+b*x%p+c)%p;
			if(M[x])
			{
				ans=max(ans, min(m-i+1, n-M[x]+1));
			}
		}
		cout<<ans<<"\n";
	}
}