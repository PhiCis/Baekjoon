#include<stdio.h>
#define MOD 1000000007
typedef long long ll;
ll n, k, t, s, e, m;
ll T[4000400];
void update(ll id, ll l, ll r, ll target, ll val)
{
	if(l>target||r<target) return;
	if(l==r)
	{
		T[id]=val;
		return;
	}
	ll m=l+r>>1;
	update(id*2, l, m, target, val);
	update(id*2+1, m+1, r, target, val);
	T[id]=T[id*2]*T[id*2+1]%MOD;
}
ll mul(ll id, ll l, ll r, ll s, ll e)
{
	if(l>e||r<s) return 1;
	if(s<=l&&r<=e)
	{
		return T[id];
	}
	ll m=l+r>>1;
	ll m1=mul(id*2, l, m, s, e);
	ll m2=mul(id*2+1, m+1, r, s, e);
	return m1*m2%MOD;
}
int main()
{
	scanf("%lld%lld%lld", &n, &m, &k);
    k+=m;
	for(ll i=1;i<=n;i++)
	{
		scanf("%lld", &t);
		update(1, 1, n, i, t);
	}
	/*for(ll i=1;i<=4*n;i++)
	{
		printf("%d ", T[i]);
	}
	printf("\n");*/
	for(ll i=1;i<=k;i++)
	{
		scanf("%lld", &t);
		if(t==2)
		{
			scanf("%lld%lld", &s, &e);
			ll tmp=mul(1, 1, n, s, e);
            printf("%lld\n", tmp);
		}
		if(t==1)
		{
			scanf("%lld%lld", &s, &e);
			update(1, 1, n, s, e);
			
		}
	}
}