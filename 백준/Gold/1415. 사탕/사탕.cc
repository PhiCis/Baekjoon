#include<bits/stdc++.h>
using namespace std;

int p[500050];
long long dp[500050];
long long ans;
int n, a[100];

int main()
{
	p[2]=1;
	for(int i=3;i<=500000;i+=2)
	{
		p[i]=1;
	}
	for(int i=3;i<=sqrt(500000);i+=2)
	{
		for(int j=i*i;j<=500000;j+=2*i)
		{
			p[j]=0;
		}
	}
	dp[0]=1;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a+1, a+n+1);
	for(int i=1;i<=n;i++)
	{
		int tmp=a[i];
		int cnt=1;
		while(tmp==a[i+1]&&i+1<=n)
		{
			i++;
			cnt++;
		}
		if(tmp==0)
		{
			dp[0]=cnt+1;
		}
		else
			for(int j=500000;j>=0;j--)
			{
				for(int k=cnt;k>0;k--)
				{
					if(j-k*tmp>=0) dp[j]+=dp[j-k*tmp];
				}
			}
	}
	for(int i=0;i<=500000;i++)
	{
		if(p[i]) ans+=dp[i];
	}
	printf("%lld", ans);
}