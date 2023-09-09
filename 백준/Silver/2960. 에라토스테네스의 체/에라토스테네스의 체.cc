#include<stdio.h>
int n, k, i, a[10000], ans[10000], pnt, cnt;
int main()
{
	scanf("%d%d", &n, &k);
	for(i=2;i<=n;i++) a[i]=1;
	while(cnt<k)
	{
		while(a[pnt]==0) pnt++;
		for(i=pnt;i<=n;i+=pnt)
		{
			if(a[i]==1)
			{
				ans[++cnt]=i;
				a[i]=0;
			}
		}
	}
	printf("%d", ans[k]);
}