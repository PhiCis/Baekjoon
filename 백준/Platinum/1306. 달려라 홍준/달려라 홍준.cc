#include<bits/stdc++.h>
using namespace std;

int n, m, a, T[4000040];

void upd(int id, int s, int e, int t, int v)
{
	if(s>t||t>e) return;
	if(s==e)
	{
		T[id]=v;
		return;
	}
	int m=s+e>>1;
	upd(id*2, s, m, t, v);
	upd(id*2+1, m+1, e, t, v);
	T[id]=max(T[id*2], T[id*2+1]);
}

int mq(int id, int s, int e, int l, int r)
{
	if(e<l||r<s) return 0;
	if(l<=s&&e<=r)
	{
		return T[id];
	}
	int m=s+e>>1;
	return max(mq(id*2, s, m, l, r), mq(id*2+1, m+1, e, l, r));
}

int main()
{
	scanf("%d", &n);
	scanf("%d", &m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a);
		upd(1, 1, n, i, a);
	}
	for(int i=m;i<=n-m+1;i++)
	{
		printf("%d ", mq(1, 1, n, i-m+1, i+m-1));
	}
}