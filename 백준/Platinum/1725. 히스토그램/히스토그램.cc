#include<stdio.h>
typedef long long ll;

ll max(ll a, ll b)
{
	return a>b?a:b;
}

struct stack{
	ll pnt;
	ll data[100010];
	stack() { pnt = 0; }
	void push(ll c) { data[++pnt]=c; }
	bool empty() { return pnt==0?true:false; }
	void pop() { pnt--; }
	ll top() { return data[pnt]; }
	ll size() { return pnt; }
};

stack s;
ll ans;
ll n, h[100010];
int main()
{
	scanf("%lld", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%lld", &h[i]);
	}
	for(int i=0;i<=n;i++)
	{
		while((!s.empty())&&h[s.top()]>h[i])
		{
			ll tmp = s.top();
			s.pop();
			if(s.empty()) ans = max(ans, h[tmp]*i);
			else ans = max(ans, h[tmp]*(i-s.top()-1));
		}
		s.push(i);
	}
	printf("%lld", ans);
}