#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll x, k;
	vector<ll> ans;
	ll ANS=0;
	scanf("%lld%lld", &x, &k);
	for(int i=0;i<=62;i++)
	{
		if((x&(1ll<<i))==0)
		{
			ans.push_back(i);
		}
	}
	for(int i=0;i<ans.size();i++)
	{
		if(k&(1ll<<i))
		{
			ANS|=(1ll<<ans[i]);
		}
	}
	printf("%lld", ANS);
}