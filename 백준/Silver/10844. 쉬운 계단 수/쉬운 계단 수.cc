#include<stdio.h>
#define MOD 1000000000
int n, i, ans, a[110][10], j;
int main()
{
	scanf("%d", &n);
	for(i=1;i<=9;i++)
	{
		a[1][i]=1;
	}
	for(i=2;i<=n;i++)
	{
		a[i][0]=a[i-1][1];
		for(j=1;j<=8;j++)
		{
			a[i][j]=(a[i-1][j-1]+a[i-1][j+1])%MOD;
		}
		a[i][9]=a[i-1][8];
	}
	for(i=0;i<=9;i++)
	{
		ans+=a[n][i];
		ans%=MOD;
	}
	printf("%d", ans);
}