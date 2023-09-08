#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

struct D{
	ll a, c, b; 
};

ll n;
D d[20020];
ll chk;
ll ans;
ll ret=1ll<<62;

int main()
{
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld%lld%lld", &d[i].a, &d[i].c, &d[i].b);
		chk+=(d[i].c-d[i].a)/d[i].b+1;
	}
	if(chk%2==0)
	{
		printf("NOTHING");
		return 0;
	}
	ll s=0, e=1ll<<31;
	while(s<=e)
	{
		ll m=s+e>>1;
		chk=0;
		for(int i=1;i<=n;i++)
		{
			if(d[i].c<m)
			{
				chk+=(d[i].c-d[i].a)/d[i].b+1;
			}
			if(d[i].c>=m&&m>=d[i].a){
				
				chk+=(m-d[i].a)/d[i].b+1;
			}
		}
		if(chk&1)
		{
			ret=min(ret, m);
			e=m-1;
		}
		else
		{
			s=m+1;
		}
	}
	
	printf("%lld ", ret);
	for(int i=1;i<=n;i++)
	{
		if(d[i].c>=ret&&ret>=d[i].a&&(ret-d[i].a)%d[i].b==0)
		{
			ans++;
		}
	}
	printf("%lld", ans);
}