#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll p[10002000];
ll ans;
ll a, b;

int main()
{
	scanf("%lld%lld", &a, &b);
	
	p[2]=1;
	for(ll i=3;i<=10002000;i+=2) p[i]=1;
	for(ll i=3;i*i<=10002000;i+=2)
		for(ll j=i*i;j<=10002000;j+=2*i)
			p[j]=0;
	
	for(ll i=1;i<=10000000;i++)
	{
		if(p[i])
		{
			__int128_t tmp=i*i;
			while(tmp<=(__int128_t)b)
			{
				if(tmp>=(__int128_t)a) ans++;
				tmp*=i;
			}
		}
	}
	printf("%lld", ans);
}