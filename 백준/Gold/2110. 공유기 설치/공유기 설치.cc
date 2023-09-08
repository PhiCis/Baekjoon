#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, c, a[200020], s, e, mid, cnt, tmp, ret;
int main()
{
	scanf("%lld%lld", &n, &c);
	for(int i=0;i<n;i++)
	{
		scanf("%lld", &a[i]);
	}
	sort(a, a+n);
	s=1; e=2e9;
	while(s<=e)
	{
		mid=s+e>>1;
		//printf("%d %d %d\n", s, e, mid);
		cnt=1; tmp=a[0];
		for(int i=1;i<n;i++)
		{
			if(a[i]-tmp>=mid)
			{
				tmp=a[i];
				cnt++;
			}
		}
		//printf("%d\n", cnt);
		if(cnt>=c)
		{
			ret=max(ret, mid);
			s=mid+1;
		}
		else
		{
			e=mid-1;
		}
	}
	printf("%lld", ret);
}