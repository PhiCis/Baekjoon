#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

ll n, m, p[100][3], ans=1, pnt;

ll power(ll a, ll b)
{
	ll ans=1;
	while(b)
	{
		if(b&1) ans=ans*a%MOD;
		a=a*a%MOD;
		b>>=1;
	}
	return ans;
}

int main()
{
	scanf("%lld%lld", &n, &m);
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			p[++pnt][0]=i;
			while(n%i==0)
			{
				p[pnt][1]+=m;
				n/=i;
			}
		}
	}
	if(n>1) p[++pnt][0]=n, p[pnt][1]=m;
	for(int i=1;i<=pnt;i++)
	{
		p[i][2]=(power(p[i][0], p[i][1]+1)-1)*(power(p[i][0]-1, MOD-2))%MOD;
		ans=ans*p[i][2]%MOD;
	}
	printf("%lld", ans);
	return 0;
}