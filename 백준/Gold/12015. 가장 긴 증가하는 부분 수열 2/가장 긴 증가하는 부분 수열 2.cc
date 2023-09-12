#include<stdio.h>
int n, i, a[1000010], dp[1000010], d[1000010], max;
int find(int x, int s, int e)
{
	int mid=(s+e)/2;
	if(x>d[mid-1]&&x<=d[mid])
	{
		d[mid]=x;
		return mid;
	}
	if(x<=d[mid-1]) return find(x, s, mid-1);
	if(x>d[mid]) return find(x, mid+1, e);
}
int main()
{
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		d[i]=2e9;
	}
	for(i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
		dp[i]=find(a[i], 1, i);
		if(dp[i]>max) max=dp[i];
		/*for(int j=0;j<=n;j++)
		{
			printf("%d %d %d\n", a[j], dp[j], d[j]);
		}*/
	}
	printf("%d", max);
}