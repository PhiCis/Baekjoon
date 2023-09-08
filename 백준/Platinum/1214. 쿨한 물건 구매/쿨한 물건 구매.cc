#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define INF 9e18

ll d, p, q, m=INF;

int main()
{
	scanf("%lld%lld%lld", &d, &p, &q);
	if(p>q) swap(p, q);
	if(p*q<=d)
	{
		printf("%lld", ((d-1)/__gcd(p, q)+1)*__gcd(p, q));
	}
	else
	{
		ll cnt=0;
		while(cnt<d)
		{
			m=min(m, cnt+((d-cnt-1)/p+1)*p);
			cnt+=q;
		}
		m=min(m, cnt);
		printf("%lld", m);
	}
}