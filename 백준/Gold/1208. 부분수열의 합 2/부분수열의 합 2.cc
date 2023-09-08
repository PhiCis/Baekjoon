#include<bits/stdc++.h>
using namespace std;

int n, s, a[50];
long long ans;
int f1[4000040], f2[4000040];

int main()
{
	scanf("%d%d", &n, &s);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i=1;i<(1<<(n/2));i++)
	{
		int t=0;
		for(int j=0;j<n/2;j++)
		{
			if((i>>j)&1) t+=a[1+j];
		}
		f1[t+2000000]++;
	}
	for(int i=1;i<(1<<(n-n/2));i++)
	{
		int t=0;
		for(int j=0;j<n-n/2;j++)
		{
			if((i>>j)&1) t+=a[n/2+1+j];
		}
		f2[t+2000000]++;
	}
//	for(int i=1999980;i<=2000020;i++)
//	{
//		printf("%d: %d / ", i-2000000, f1[i]);
//	}
//	printf("\n");
//	for(int i=1999980;i<=2000020;i++)
//	{
//		printf("%d: %d / ", i-2000000, f2[i]);
//	}
	ans+=f1[s+2000000]+f2[s+2000000];
	for(int ii=0;ii<=4000000;ii++)
	{
		int i=ii-2000000;
		int j=s-i;
		if(j>=-2000000&&j<=2000000) ans+=(long long)f1[i+2000000]*f2[j+2000000];
	}
	printf("%lld", ans);
}