#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, a[60], cnt, ans;

int main()
{
	scanf("%lld", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld", &a[i]);
	}
	for(int i=1;i<=n;i++)
	{
		//printf("%lld\n", i);
		cnt=0;
		for(int j=1;j<i;j++)
		{
			for(int k=j+1;k<i;k++)
			{
				if((a[k]-a[j])*(i-j)>=(a[i]-a[j])*(k-j)) goto skip1;
			}
			cnt++;
			//printf("%d ", j);
			skip1:;
		}
		for(int j=i+1;j<=n;j++)
		{
			for(int k=i+1;k<j;k++)
			{
				if((a[k]-a[i])*(i-j)<=(a[i]-a[j])*(k-i)) goto skip2;
			}
			cnt++;
			//printf("%d ", j);
			skip2:;
		}
		ans=max(ans, cnt);
		//printf(":%d\n", cnt);
	}
	printf("%lld", ans);
}