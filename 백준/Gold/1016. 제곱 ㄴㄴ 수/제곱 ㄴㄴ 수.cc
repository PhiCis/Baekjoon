#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a, b;
ll chk[1000010];
int ans;
int main()
{
	scanf("%lld%lld", &a, &b);
	for(ll i=2;i*i<=b;i++)
	{
		ll pnt=(a%(i*i)==0)?a:((a/(i*i)+1)*(i*i));
		while(pnt<=b)
		{
			chk[pnt-a]++;
			pnt+=i*i;
		}
	}
	for(ll i=0;i<=b-a;i++)
	{
		if(chk[i]==0) ans++;
	}
	printf("%d", ans);
}