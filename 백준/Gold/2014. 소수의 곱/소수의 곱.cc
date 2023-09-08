#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll k, n;
priority_queue<ll, vector<ll>, greater<ll> > pq;
ll a[110];
int main()
{
	scanf("%lld%lld", &k, &n);
	for(int i=1;i<=k;i++)
	{
		scanf("%lld", &a[i]);
		pq.push(a[i]);
	}
	for(int i=1;i<n;i++)
	{
		int t=pq.top();
		pq.pop();
		for(int j=1;j<=k;j++)
		{
			ll v=t*a[j];
			pq.push(v);
			if(t%a[j]==0) break;
		}
	}
	printf("%d", pq.top());
}