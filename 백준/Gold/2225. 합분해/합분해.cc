#include<stdio.h>
#define MOD 1000000000
long long a[1000][1000];
long long n, k;
int main()
{
	scanf("%d%d", &n, &k);
	for(int i=1;i<=k;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==1)
			{
				a[i][j]=1;
			}
			else
			{
				for(int l=0;l<=j;l++)
				{
					a[i][j]+=a[i-1][j-l];
				}
				a[i][j]%=MOD;
			}
		}
	}
	printf("%d", a[k][n]%MOD);
}