#include<bits/stdc++.h>
using namespace std;

int n, k, x[1010], y[1010];
int ans=1415;

int main()
{
	scanf("%d%d", &n, &k);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d", &x[i], &y[i]);
	}
	x[n+1]=y[n+1]=10000;
	
	int s=1, e=1415;
	while(s<=e)
	{
		int m=s+e>>1;
		int chk[1010]={0};
		queue<int> q;
		bool flag = false;
		
		q.push(0);
		chk[0]=1;
		while(!q.empty())
		{
			int now = q.front();
			q.pop();
			if(now==n+1)
			{
				if(chk[now]<=k+2) flag = true;
				break;
			}
			for(int i=1;i<=n+1;i++)
			{
				if(chk[i]) continue;
				if((x[now]-x[i])*(x[now]-x[i])+(y[now]-y[i])*(y[now]-y[i])<=m*m*100)
				{
					chk[i]=chk[now]+1;
					q.push(i);
				}
			}
		}
		if(flag)
		{
			ans=min(ans, m);
			e=m-1;
		}
		else
		{
			s=m+1;
		}
	}
	printf("%d", ans);
	
}