#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, k, a[250050], T[250050], ans;
void upd(ll id, ll s, ll e, ll t, ll v)
{
	if(e<t||t<s) return;
	if(s==e)
	{
		T[id]+=v;
		return;
	}
	ll m=s+e>>1;
	upd(id*2, s, m, t, v);
	upd(id*2+1, m+1, e, t, v);
	T[id]=T[id*2]+T[id*2+1];
}
ll query(ll id, ll s, ll e, ll v)
{
	ll m=s+e>>1;
	if(s==e) return s;
	if(T[id*2]>=v) return query(id*2, s, m, v);
	return query(id*2+1, m+1, e, v-T[id*2]);
}
int main()
{
	scanf("%lld%lld", &n, &k);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld", &a[i]);
		a[i]++;
	}
	for(int i=1;i<k;i++){
		upd(1, 1, 65536, a[i], 1);
	}
	for(int i=k;i<=n;i++)
	{
		upd(1, 1, 65536, a[i], 1);
		/*for(int j=1;j<=32;j++)
		{
			printf("%d ", T[j]);
		}
		printf("\n");*/
		ans+=query(1, 1, 65536, k+1>>1);
		upd(1, 1, 65536, a[i-k+1], -1);
	}
	printf("%lld", ans-(n-k+1));
}