#include<bits/stdc++.h>
using namespace std;

int n, a[110][2], b[110][2], c[110];

long long ans=1;

int main()
{
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i][0]);
		if(!b[a[i][0]][0]) b[a[i][0]][0]=i;
		else b[a[i][0]][1]=i;
	}
	for(int i=1;i<=n;i++)
	{
		scanf("%d", &a[i][1]);
		if(!b[a[i][1]][0]) b[a[i][1]][0]=i;
		else b[a[i][1]][1]=i;
	}
//	for(int i=1;i<=n;i++)
//	{
//		for(int j=0;j<2;j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
	for(int i=1;i<=n;i++)
	{
		if(c[i]) continue;
		int u = i, v = b[i][0];
		while(1)
		{
//			printf("%d %d\n", u, v);
			if(c[u]) break;
			c[u]=1;
			if(a[v][0]==u)
			{
				u=a[v][1];
				if(b[u][0]==v)
				{
					v=b[u][1];
				}
				else
				{
					v=b[u][0];
				}
			}
			else
			{
				u=a[v][0];
				if(b[u][0]==v)
				{
					v=b[u][1];
				}
				else
				{
					v=b[u][0];
				}
			}
		}
		ans*=2;
	}
	printf("%lld", ans);
}