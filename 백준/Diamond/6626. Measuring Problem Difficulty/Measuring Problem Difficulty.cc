#include<bits/stdc++.h>
using namespace std;

int dp[85][85];
int da[300020], b[300020], c[300020], db[300020], dc[300020];
long long ans;

int main()
{
	while(1)
	{
		for(int i=0;i<85;i++)
		{
			for(int j=0;j<85;j++)
			{
				dp[i][j]=0;
			}
		}
		ans = 0;
		
		int n;
		scanf("%d", &n);
		if(n==0) return 0;
		
		for(int i=1;i<=n;i++)
		{
			int a;
			scanf("%d", &a);
			da[a]=i;
		}
		for(int i=1;i<=n;i++)
		{
			scanf("%d", &b[i]);
			b[i]=da[b[i]];
			db[b[i]]=i;
		}
		for(int i=1;i<=n;i++)
		{
			scanf("%d", &c[i]);
			c[i]=da[c[i]];
			dc[c[i]]=i;
		}
//		for(int i=1;i<=n;i++)
//		{
//			printf("%d %d\n", db[i], dc[i]);
//		}
		
		for(int i=1;i<=n;i++)
		{
			int B=db[i], C=dc[i];
			int Bq=(B-1)/2500+1, Cq=(C-1)/2500+1;
			int Br=(Bq-1)*2500+1, Cr=(Cq-1)*2500+1;
			
			for(int j=Br;j<B;j++)
			{
				if(b[j]<i && dc[b[j]]<C) ans++;
			}
			for(int j=Cr;j<C;j++)
			{
				if(c[j]<i && db[c[j]]<Br) ans++;
			}
			ans+=dp[Bq][Cq];
			for(int j=Bq+1;j<85;j++)
			{
				for(int k=Cq+1;k<85;k++)
				{
					dp[j][k]++;
				}
			}
		}
		printf("%lld\n", ans);
	}
}