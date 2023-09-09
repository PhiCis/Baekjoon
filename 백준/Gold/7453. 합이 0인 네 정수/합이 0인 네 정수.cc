#include<bits/stdc++.h>
using namespace std;
#define INF 2e9

int n, a[4040], b[4040], c[4040], d[4040];
int ab[16000060], cd[16000060];
long long ans;
int s, e, mini, maxi;
int main()
{
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d%d%d%d", &a[i], &b[i], &c[i], &d[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			ab[i*n+j]=a[i]+b[j];
			cd[i+n*j]=c[i]+d[j];
		}
	}
	sort(cd, cd+n*n);
	for(int i=0;i<n*n;i++)
	{
		s=0, e=n*n-1, mini=INF;
		while(s<=e)
		{
			int m=s+e>>1;
			if(ab[i]+cd[m]>=0)
			{
				if(ab[i]+cd[m]==0) mini=min(mini, m);
				e=m-1;
			}
			else
			{
				s=m+1;
			}
		}
		if(mini==INF) continue;
		s=0, e=n*n-1, maxi=-INF;
		while(s<=e)
		{
			int m=s+e>>1;
			if(ab[i]+cd[m]>0)
			{
				e=m-1;
			}
			else
			{
				if(ab[i]+cd[m]==0) maxi=max(maxi, m);
				s=m+1;
			}
		}
		ans+=maxi-mini+1;
	}
	printf("%lld", ans);
}