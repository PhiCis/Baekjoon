#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, a[101010];

ll f(ll s, ll e)
{
	if(s>e) return 0;
	if(s==e) return a[s];
	
	ll m=s+e>>1;
	ll M=max(f(s, m), f(m+1, e));
	ll pntl=m, pntr=m, Min=a[m], d=1;
	if(Min*d>M) M=Min*d;
	while(pntl>s||pntr<e)
	{
		if((a[pntl-1]>a[pntr+1]||pntr>=e)&&pntl>s)
		{
			Min=Min<a[pntl-1]?Min:a[pntl-1];
			d++;
			if(Min*d>M) M=Min*d;
			pntl--;
		}
		if((a[pntl-1]<=a[pntr+1]||pntl<=s)&&pntr<e)
		{
			Min=Min<a[pntr+1]?Min:a[pntr+1];
			d++;
			if(Min*d>M) M=Min*d;
			pntr++;
		}
	}
	return M;
}

int main()
{
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld", &a[i]);
	}
	printf("%lld", f(1, n));
}
