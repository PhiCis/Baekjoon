#include<stdio.h>
int n, i, j, a[6][6], ans[6][6], tmp[6][6], k;
long long m;
int main()
{
	scanf("%d%lld", &n, &m);
	for(i=1;i<=n;i++)
	{
		ans[i][i]=1;
		for(j=1;j<=n;j++)
		{
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
						tmp[i][j]%=1000;
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
					tmp[i][j]%=1000;
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
}