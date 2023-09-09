#include<stdio.h>
int n, i, j, a[110][110], ans[110][110], tmp[110][110], k, p;
long long m;
int main()
{
	while(1)
	{
		scanf("%lld%lld%lld", &n, &p, &m);
		if(n==0&&p==0&&m==0) return 0;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				ans[i][j]=(i==j);
				scanf("%d", &a[i][j]);
			}
		}
		while(m)
		{
			if(m&1)
			{
				for(i=1;i<=n;i++)
				{
					for(j=1;j<=n;j++)
					{
						tmp[i][j]=0;
						for(k=1;k<=n;k++)
						{
							tmp[i][j]+=a[i][k]*ans[k][j];
							tmp[i][j]%=p;
						}
					}
				}
				for(i=1;i<=n;i++)
				{
					for(j=1;j<=n;j++)
					{
						ans[i][j]=tmp[i][j];
					}
				}
			}
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
				{
					tmp[i][j]=0;
					for(k=1;k<=n;k++)
					{
						tmp[i][j]+=a[i][k]*a[k][j];
						tmp[i][j]%=p;
					}
				}
			}
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=n;j++)
				{
					a[i][j]=tmp[i][j];
				}
			}
			m>>=1;
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				printf("%d ", ans[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}