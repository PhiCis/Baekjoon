#include<bits/stdc++.h>
using namespace std;

long long x[5], y[5];
long long a[5], b[5];
long long ans;

int main()
{
	for(int i=1;i<=4;i++)
	{
		scanf("%lld%lld", &x[i], &y[i]);
		a[i]=x[i], b[i]=y[i];
	}
	sort(a+1, a+5);
	sort(b+1, b+5);
	for(int i=1;i<=3;i++)
	{
		for(int j=1;j<=3;j++)
		{
			if(a[i]>=x[1]&&a[i]<=x[2]&&a[i]>=x[3]&&a[i]<=x[4] && a[i+1]>=x[1]&&a[i+1]<=x[2]&&a[i+1]>=x[3]&&a[i+1]<=x[4])
			{
				if(b[j]>=y[2]&&b[j]<=y[1]&&b[j]>=y[4]&&b[j]<=y[3] && b[j+1]>=y[2]&&b[j+1]<=y[1]&&b[j+1]>=y[4]&&b[j+1]<=y[3])
				{
					ans+=(a[i+1]-a[i])*(b[j+1]-b[j]);
				}
			}
		}
	}
	printf("%lld", ans);
}