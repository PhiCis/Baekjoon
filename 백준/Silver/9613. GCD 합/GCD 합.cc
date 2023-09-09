#include<stdio.h>
#include<algorithm>
using namespace std;
long long int t, i, j, k, n, a[110], ans;
int main()
{
	scanf("%lld", &t);
	for(i=0;i<t;i++)
	{
		scanf("%lld", &n);
		for(j=0;j<n;j++)
		{
			scanf("%lld", &a[j]);
		}
		ans=0;
		for(j=0;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				ans+=__gcd(a[j], a[k]);
			}
		}
		printf("%lld\n", ans);
	}
}