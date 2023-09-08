#include<stdio.h>
long long n, k, i, a[10010], s, e, m, ans, max;
int main()
{
	scanf("%lld%lld", &n, &k);
	for(i=1;i<=n;i++)
	{
		scanf("%lld", &a[i]);
	}
	s=0;e=2147483647;
	while(s<=e)
	{
		m=s+e>>1;
		ans=0;
		for(i=1;i<=n;i++)
		{
			ans+=a[i]/m;
		}
		if(ans>=k)
		{
			max=m;
			s=m+1;
		}
		else
		{
			e=m-1;
		}
	}
	printf("%lld", max);
}