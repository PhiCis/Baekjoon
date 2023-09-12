#include<stdio.h>
#define MOD 10007
int n, a[1010][10], tmp, ans;
int main()
{
	scanf("%d", &n);
	for(int i=0;i<10;i++)
	{
		a[1][i]=1;
	}
	for(int i=2;i<=n;i++)
	{
		tmp=0;
		for(int j=0;j<10;j++)
		{
			tmp+=a[i-1][j];
			a[i][j]=tmp%MOD;
		}
	}
	for(int i=0;i<10;i++)
	{
		ans+=a[n][i];
	}
	printf("%d", ans%MOD);
}