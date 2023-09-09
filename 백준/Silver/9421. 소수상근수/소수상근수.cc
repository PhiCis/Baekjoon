#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool p[1000200];
ll n;

bool f(ll k)
{
	map<ll, ll> m;
	while(1)
	{
		if(m[k]) return false;
		if(k==1) return true;
		m[k]=1;
		ll tmp=0;
		while(k)
		{
			tmp+=(k%10)*(k%10);
			k/=10;
		}
		k=tmp;
	}
}

int main()
{
	scanf("%d", &n);
	
	p[2]=1;
	for(ll i=3;i<=1000000;i+=2) p[i]=1;
	for(ll i=3;i*i<=1000000;i+=2)
		for(ll j=i*i;j<=1000000;j+=2*i)
			p[j]=0;
	
	for(ll i=1;i<=n;i++)
	{
		if(p[i])
			if(f(i))
				printf("%d\n", i);
	}
}