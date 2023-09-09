#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, a;
ll ans, issame;
stack<pair<ll, ll> > s;
int main()
{
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld", &a);
		while(!s.empty()&&s.top().first<=a)
		{
			if(s.top().first==a)
			{
				issame=s.top().second;
				ans+=issame;
				s.pop();
			}
			else ans+=s.top().second, s.pop();
		}
		if(!s.empty()) ans++;
		if(issame) s.push({a, issame+1});
		else s.push({a, 1});
		issame=0;
	}
	printf("%lld", ans);
}