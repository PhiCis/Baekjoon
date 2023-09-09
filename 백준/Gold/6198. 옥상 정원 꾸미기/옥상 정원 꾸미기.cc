#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, a;
ll ans;
stack<ll> s;
int main()
{
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld", &a);
		while(!s.empty()&&s.top()<=a)
		{
			s.pop();
			ans+=(long long)s.size();
		}
		s.push(a);
	}
	ans+=(long long)s.size()*(s.size()-1)/2;
	printf("%lld", ans);
}