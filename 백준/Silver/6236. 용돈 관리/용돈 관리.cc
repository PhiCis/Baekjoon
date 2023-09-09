#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, m, a[100010], h, s, e, ret=9e18, mid, tmp, cnt, M;
int main()
{
	scanf("%lld", &n);
	scanf("%lld", &m);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld", &a[i]);
		h+=a[i];
		M=max(M, a[i]);
	}
	s=M; e=h+1;
	while(s<=e)
	{
		mid=s+e>>1;
		//printf("%d %d %d\n", s, e, mid);
		cnt=1; tmp=0;
		for(int i=1;i<=n;i++)
		{
			if(tmp+a[i]<=mid) tmp+=a[i];
			else
			{
				cnt++;
				tmp=a[i];
			}
		}
		//printf("%d\n", cnt);
		if(cnt<=m)
		{
			ret=min(ret, mid);
			e=mid-1;
		}
		else
		{
			s=mid+1;
		}
	}
	printf("%lld", ret);
}