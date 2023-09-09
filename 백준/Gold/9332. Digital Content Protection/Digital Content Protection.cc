#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
ull n, r;
ull a[1010];
ull ans[100100];
ull pnt;

void f(ull k)
{
	if(k>=(1ull<<(n+1))) return;
	for(ull i=1;i<=r;i++)
	{
		ull tmp=a[i];
		while(tmp>k) tmp>>=1;
		if(tmp==k)
		{
			f(2*k);
			f(2*k+1);
			return;
		}
	}
	ans[pnt++]=k;
	return;
}
int main()
{
	scanf("%llu%llu", &n, &r);
	for(ull i=1;i<=r;i++)
	{
		scanf("%llu", &a[i]);
	}
	f(1);
	sort(ans, ans+pnt);
	for(ull i=0;i<pnt;i++)
	{
		printf("%llu ", ans[i]);
	}
}