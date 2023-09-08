#include<bits/stdc++.h>
using namespace std;
int n, k, d[110][110];
int chk[110];
vector<int> ans;
int main()
{
	scanf("%d%d", &n, &k);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			d[i][j]=1e9;
			if(i==j) d[i][j]=0;
		}
	}
	for(int i=1;i<=k;i++)
	{
		int u, v;	
		scanf("%d%d", &u, &v);
		d[u][v]=d[v][u]=1;
	}
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				d[i][j]=min(d[i][j], d[i][k]+d[k][j]);
			}
		}
	}/*
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%10d ", d[i][j]);
		}
		printf("\n");
	}*/
	for(int i=1;i<=n;i++)
	{
		if(chk[i]==2) continue;
		chk[i]=1;
		for(int j=1;j<=n;j++)
		{
			if(d[i][j]!=1e9) chk[j]=1;
		}
		int tmp = 1e9, tmpi;
		for(int j=1;j<=n;j++)
		{
			if(chk[j]==1)
			{
				int ttmp = 0;
				for(int k=1;k<=n;k++)
				{
					if(d[j][k]==1e9) continue;
					ttmp = max(ttmp, d[j][k]);
				}
				if(tmp>ttmp)
				{
					tmp=ttmp;
					tmpi = j;
				}
				chk[j]=2;
			}
		}
		ans.push_back(tmpi);
	}
	printf("%d\n", ans.size());
	sort(ans.begin(), ans.end());
	for(int i=0;i<ans.size();i++)
	{
		printf("%d\n", ans[i]);
	}
}